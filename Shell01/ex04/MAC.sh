#!/bin/sh
ifconfig | grep 'ether' | sed 's_ether__g' | cut -d ' ' -f 2
