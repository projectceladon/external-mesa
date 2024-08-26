#!/bin/bash
if [ ! -d "venv" ]; then
  echo "A venv folder was not found for this project, try running setup-venv.sh!"
  exit 0
fi

source venv/bin/activate
# automatically fixes formatting that isn't considered 'unsafe'
ruff format --config "format.quote-style = 'single'"
ruff check # This is for unsafe fixes
echo "The above errors displays fixes that must be fixed manually."
