#!/bin/sh
find . -type f -name "*.sh" | sed 's_.*/__g' | sed 's_\.sh__g'
