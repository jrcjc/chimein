# Be sure to restart your server when you modify this file.

# Your secret key for verifying cookie session data integrity.
# If you change this key, all old sessions will become invalid!
# Make sure the secret is at least 30 characters and all random, 
# no regular words or you'll be exposed to dictionary attacks.
ActionController::Base.session = {
  :key         => '_ror_session',
  :secret      => 'afd142a61a418a3fd930afcce3aff059f070aa604c11d953c67ddf6532a8575809a7a515756de3ff6520ea9503fbcfc857bb4564165312ffa7656133fa4c5302'
}

# Use the database for sessions instead of the cookie-based default,
# which shouldn't be used to store highly confidential information
# (create the session table with "rake db:sessions:create")
# ActionController::Base.session_store = :active_record_store
