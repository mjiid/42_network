#!/bin/sh
cd /home/hduser/Desktop/42_network
ignored_files=$(git ls-files -o --ignored --exclude-standard)
if [ -n "$ignored_files" ]; then
	  echo "Ignored files in the Git repository:"
	    echo "$ignored_files"
    else
	      echo "No ignored files found in the Git repository."
fi
