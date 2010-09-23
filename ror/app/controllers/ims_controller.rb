require 'ruburple'

class ImsController < ApplicationController
  
                  
  def initialize(*params)
    super(*params)
    
    puts "testing init..."
    Ruburple::init
    puts "testing subscribe..."
  
     @@events = {
      :signed_on => [],
      :received_im_msg => []
    }
    
    Ruburple::subscribe(:signed_on, (Proc.new { |a| @@events[:signed_on] << a })) 
    
    Ruburple::subscribe(:received_im_msg, (Proc.new { |account, sender, message, conversation, flags|  @@events[:received_im_msg] << [account.username, sender, message] })) 

    #TODO: add read system accounts from configuration
    p1 = Ruburple::get_protocol("Yahoo")
    @sysYIM = p1.get_account("yoyochemin_test1", "test123")
    if(!@sysYIM.connecting?)
      @sysYIM.connect
    end
  end


  # GET /ims
  # GET /ims.xml
  def index
    @ims = Im.all
    
    @ims.each do |im_account| 
       im_account.status = getUserStatus(im_account.username)
    end
    
    respond_to do |format|
      format.html # index.html.erb
      format.xml  { render :xml => @ims }
    end
  end

  # GET /ims/1
  # GET /ims/1.xml
  def show
    @im = Im.find(params[:id])

    respond_to do |format|
      format.html # show.html.erb
      format.xml  { render :xml => @im }
    end
  end

  # GET /ims/new
  # GET /ims/new.xml
  def new
    @im = Im.new

    respond_to do |format|
      format.html # new.html.erb
      format.xml  { render :xml => @im }
    end
  end

  # GET /ims/1/edit
  def edit
    @im = Im.find(params[:id])
  end

  # POST /ims
  # POST /ims.xml
  def create
    @im = Im.new(params[:im])

    respond_to do |format|
      if @im.save
        flash[:notice] = 'Im was successfully created.'
        format.html { redirect_to(@im) }
        format.xml  { render :xml => @im, :status => :created, :location => @im }
      else
        format.html { render :action => "new" }
        format.xml  { render :xml => @im.errors, :status => :unprocessable_entity }
      end
    end
  end

  # PUT /ims/1
  # PUT /ims/1.xml
  def update
    @im = Im.find(params[:id])

    respond_to do |format|
      if @im.update_attributes(params[:im])
        flash[:notice] = 'Im was successfully updated.'
        format.html { redirect_to(@im) }
        format.xml  { head :ok }
      else
        format.html { render :action => "edit" }
        format.xml  { render :xml => @im.errors, :status => :unprocessable_entity }
      end
    end
  end

  # DELETE /ims/1
  # DELETE /ims/1.xml
  def destroy
    @im = Im.find(params[:id])
    @im.destroy

    respond_to do |format|
      format.html { redirect_to(ims_url) }
      format.xml  { head :ok }
    end
  end
  
  def getUserStatus(handle)
    acct = Im.find_by_username(handle)
    if acct != nil and acct.protocol != nil
      begin
        if Ruburple::has_protocol?(acct.protocol)
          p = Ruburple::get_protocol(acct.protocol)
          a = p.get_account(acct.username)#, "acct.password")  
          a.enabled = true
          return a.status.name
        end
      rescue
        return "Unknown"
      end
    end
    
    return "Unknown"
    
  end
  
  def sendIM
    protocol = params[:protocol]
    username = params[:username]
    message = params[:message]
    if protocol == "Yahoo"
      if @sysYIM.connecting?
        @sysYIM.connection.send_im(username, message)
      end
    end
  end
end
