class Im < ActiveRecord::Base
  attr_accessor :status
  belongs_to :account
end
