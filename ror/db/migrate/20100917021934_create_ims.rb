class CreateIms < ActiveRecord::Migration
  def self.up
    create_table :ims do |t|
      t.text :protocol
      t.text :username
      t.text :password
      t.text :type
      t.timestamps
    end
  end

  def self.down
    drop_table :ims
  end
end
