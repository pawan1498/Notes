#!/bin/bash

ruby_version="2.7.0"
gemset_name="new_solar_tou"
project_directory="/home/pawan/Documents/solar-tou"

# Function to execute a command with diagnostic output
execute_command() {
    echo "Executing: $1"
    eval "$1"
}

# Open a new terminal tab for each command

# Task 1: Start Rails server
gnome-terminal --tab --title="Rails Server" -- bash -c "cd $project_directory; source $HOME/.rvm/scripts/rvm; rvm use $ruby_version@$gemset_name; rails s" &

# Task 2: Start Sidekiq
gnome-terminal --tab --title="Sidekiq" -- bash -c "cd $project_directory; source $HOME/.rvm/scripts/rvm; rvm use $ruby_version@$gemset_name; sidekiq" &

# Task 3: Start Rails console
gnome-terminal --tab --title="Rails Console" -- bash -c "cd $project_directory; source $HOME/.rvm/scripts/rvm; rvm use $ruby_version@$gemset_name; rails c" &

# Task 4: Start Solr and Reindex
gnome-terminal --tab --title="Solr and Reindex" -- bash -c "cd $project_directory; source $HOME/.rvm/scripts/rvm; rvm use $ruby_version@$gemset_name; bundle exec rake sunspot:solr:start; bundle exec rake sunspot:solr:reindex" &

# Wait for background processes to finish
wait

# Task 5: Open VSCode in the project directory
gnome-terminal --tab --title="VSCode" -- bash -c "cd $project_directory; code ." &

sleep 10
# Task 6: Open Chrome with tabs
google-chrome --new-tab "http://localhost:3000" --new-tab "https://chat.openai.com/" --new-tab "https://mail.google.com/mail/u/0/#inbox"

