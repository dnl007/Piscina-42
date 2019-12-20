#!/bin/sh
git status --ignored -s | grep '!!' | cut -d' ' -f 2 | grep 'ex' -v | cut -d'/' -f 2
