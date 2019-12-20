#!/bin/sh
cat /etc/passwd | grep '#' -v | awk 'NR % 2' | sed 's_:.*__' | rev | sort -r | awk "NR >= $FT_LINE1 && NR <=  $FT_LINE2" | TR '\n' ',' | sed 's_,_, _g' | sed 's_, $_._' | TR -d '\n'
