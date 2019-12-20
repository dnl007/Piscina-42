#!/bin/sh
echo $FT_NBR1 + $FT_NBR2 | tr mrdoc 01234 | tr '\\"\?\!' 1234 | sed "s/'/0/g" | awk '{print "obase=13;ibase=5;"$0}' | bc | tr "0123456789ABC" "gtaio luSnemf"
