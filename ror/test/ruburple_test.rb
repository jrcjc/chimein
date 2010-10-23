require "test/unit"
require File.join(File.dirname(__FILE__), 'test_helper')
require 'ruburple'

class RuburpleTest < Test::Unit::TestCase


  accounts_file = Pathname.new(__FILE__).parent.join("test_accounts.rb")
  #die("You have to create a #{accounts_file} looking like #{accounts_file}.template to run #{__FILE__}") unless accounts_file.exist?
  require accounts_file

  @@events = {}

  puts "testing init..."
  Ruburple::init
  puts "testing subscribe..."
  
  #Ruburple::debug = true
   
  #def sign_on_event(a)
  #  puts "got signed_on from #{a.account.username}"
  #  @@events[:signed_on] << a
  #end

  #def receive_msg(account, sender, message, conversation, flags)
  #  puts "got received_im_msg from #{sender} to #{account.username}"
  #  @@events[:received_im_msg] << [account.username, sender, message]
  #end
  
  Ruburple::subscribe(:signed_on, (Proc.new { |a| @@events[:signed_on] << a })) 
  
  Ruburple::subscribe(:received_im_msg, (Proc.new { |account, sender, message, conversation, flags|  @@events[:received_im_msg] << [account.username, sender, message] })) 

  def setup
    @@events = {
      :signed_on => [],
      :received_im_msg => []
    }
  end

  def test_accounts
    $TEST_ACCOUNTS.each do |ac1, ac2|
      #test_operations(ac1, ac2)
      #test_imOperation(ac1, ac2)
      test_userStatus(ac2)
      #test_addBuddy(ac1, ac2)  not yet supported
    end
  end

  private

  def test_imOperation(ac1, ac2)
    puts "testing #{ac1.protocol} + #{ac2.protocol}..."
    assert(Ruburple::has_protocol?(ac1.protocol))
    assert(Ruburple::has_protocol?(ac2.protocol))
    p1 = Ruburple::get_protocol(ac1.protocol)
    p2 = Ruburple::get_protocol(ac2.protocol)
    puts "testing get account..."
    a1 = p1.get_account(ac1.username, ac1.password)
    a2 = p2.get_account(ac2.username, ac2.password)
    puts "testing connecting ... + #{a1.username}"
    assert(!a1.connecting?)
    a1.connect
    assert(a1.connecting?)
    puts "testing sign on..."
    assert_within(30) do 
      @@events[:signed_on].find do |e|
        e.account.username == a1.username
      end
    end
    assert(a1.connected?)
    puts "testing uid..."
    #assert(a1.uid != a2.uid)
    assert_equal(a1.uid, a1.connection.account.uid)
    sleep 2
    #puts "testing connecting ...+ #{a2.username}"
    #assert(!a2.connecting?)
    #a2.connect
    #assert(a2.connecting?)
    #sleep 2
    #assert_within(5) do 
    #  @@events[:signed_on].find do |e|
    #    e.account.username == a2.username
    #  end
    #end
    a1.connection.send_im(a2.username, "hello a2")
    #assert_within(30) do 
    #  @a2_got_message = @@events[:received_im_msg].find do |recipient, sender, message|
    #    recipient == a2.username && sender = a1.username && message =~ /hello a2/
    #  end
    #end  
    
    #assert(@a1_got_message && @a2_got_message)
    
    puts "testing set enabled..."
    a1.enabled = false
    puts "testing close..."
    a1.connection.close
    #a2.connection.close
    
  end
  
  def test_userStatus(ac2)
    puts "testing + #{ac2.protocol}..."
    assert(Ruburple::has_protocol?(ac2.protocol))
    p2 = Ruburple::get_protocol(ac2.protocol)
    puts "testing get account..."
    a2 = p2.get_account(ac2.username, ac2.password)
    puts "presents:  + #{a2.presence}"
    puts "status1: + #{a2.status.primitive}"
    puts "status2: + #{a2.status.name}"
  end
  
  def test_addBuddy(ac1, ac2)
     puts "testing #{ac1.protocol} + #{ac2.protocol}..."
    assert(Ruburple::has_protocol?(ac1.protocol))
    assert(Ruburple::has_protocol?(ac2.protocol))
    p1 = Ruburple::get_protocol(ac1.protocol)
    p2 = Ruburple::get_protocol(ac2.protocol)
    puts "testing get account..."
    a1 = p1.get_account(ac1.username, ac1.password)
    a2 = p2.get_account(ac2.username, ac2.password)
    puts "testing connecting ... + #{a1.username}"
    assert(!a1.connecting?)
    a1.connect
    assert(a1.connecting?)
    puts "testing sign on..."
    assert_within(30) do 
      @@events[:signed_on].find do |e|
        e.account.username == a1.username
      end
    end
    assert(a1.connected?)
    puts "testing uid..."
    #assert(a1.uid != a2.uid)
    assert_equal(a1.uid, a1.connection.account.uid)
    sleep 2
    a1.add_buddy(a2.username)
  end
  
  def test_operations(ac1, ac2)
    puts "testing #{ac1.protocol} + #{ac2.protocol}..."
    assert(Ruburple::has_protocol?(ac1.protocol))
    assert(Ruburple::has_protocol?(ac2.protocol))
    p1 = Ruburple::get_protocol(ac1.protocol)
    p2 = Ruburple::get_protocol(ac2.protocol)
    puts "testing get account..."
    a1 = p1.get_account(ac1.username, ac1.password)
    a2 = p2.get_account(ac2.username, ac2.password)
    puts "testing connecting ... + #{a1.username}"
    assert(!a1.connecting?)
    a1.connect
    assert(a1.connecting?)
    puts "testing sign on..."
    assert_within(30) do 
      @@events[:signed_on].find do |e|
        e.account.username == a1.username
      end
    end
    assert(!a1.connecting?)
    assert(a1.connected?)
    puts "testing uid..."
    assert(a1.uid != a2.uid)
    assert_equal(a1.uid, a1.connection.account.uid)
    sleep 2
    puts "testing buddies..."
    #a1buddies = a1.buddies
    #assert(a1.has_buddy?(a2.username))
    #assert(buddy2 = a1.buddies.find do |b|
    #         a2.username =~ /#{Regexp.escape(b.name)}/
    #       end)
    puts "testing set enabled..."
    #a2.enabled = true
    puts "testing connecting ...+ #{a2.username}"
    assert(!a2.connecting?)
    a2.connect
    assert(a2.connecting?)
    sleep 2
    assert_within(5) do 
      @@events[:signed_on].find do |e|
        e.account.username == a2.username
      end
    end
    a1.savedstatus = Ruburple::Protocol::Account::SavedStatus.new(Ruburple::Protocol::Account::Status::STATUS_AVAILABLE)
    a2.savedstatus = Ruburple::Protocol::Account::SavedStatus.new(Ruburple::Protocol::Account::Status::STATUS_AVAILABLE)
    puts "testing status..."
    assert_equal("Available", a1.status.name)
    assert_equal("Available", a2.status.name)
    assert_equal(Ruburple::Protocol::Account::Status::STATUS_AVAILABLE, a1.status.primitive)
    assert_equal(Ruburple::Protocol::Account::Status::STATUS_AVAILABLE, a2.status.primitive)
    puts "testing buddies..."
    sleep 2
    #assert(a2.has_buddy?(a1.username))
    #assert(buddy1 = a2.buddies.find do |b|
    #         a1.username =~ /#{Regexp.escape(b.name)}/
    #       end)
    puts "testing send im..."
   
    a2.connection.send_im(a1.username, "hello a1")
    assert_within(30) do 
      @a1_got_message = @@events[:received_im_msg].find do |recipient, sender, message|
        recipient == a1.username && sender = a2.username && message =~ /hello a1/
      end
     
      #a1_got_message && a2_got_message
    end
    
    
     a1.connection.send_im(a2.username, "hello a2")
     assert_within(30) do 
      @a2_got_message = @@events[:received_im_msg].find do |recipient, sender, message|
        recipient == a2.username && sender = a1.username && message =~ /hello a2/
      end
    end  
    
    assert(@a1_got_message && @a2_got_message)
    
    puts "testing set enabled..."
    a1.enabled = false
    puts "testing close..."
    a2.connection.close
  end


end
