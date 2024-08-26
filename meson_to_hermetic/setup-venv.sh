#!/bin/bash
if [ -d "venv" ]; then
  echo "A venv folder already exists in this project!"
  exit 0
fi
if command -v python3 >/dev/null 2>&1; then
  echo "Currently creating a python virtual environment..."
  python3 -m venv venv
  source venv/bin/activate
  echo "Done creating new venv folder and terminal is now using venv."
  echo "Now attempting to install dependencies..."
  pip install -r requirements.txt
  echo "Successfully finished installing dependencies!"
else
  echo "Python 3 is not currently installed on your machine!"
fi
