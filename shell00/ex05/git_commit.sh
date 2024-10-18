#!/bin/bash

git log --oneline --no-abbrev-commit | cut -d' ' -f 1 | head -n 5
