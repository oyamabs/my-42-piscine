#!/bin/bash
cat /etc/passwd | sed '#*/d' | awk 'NR % 2 == 0' | cut -d ':' -f 1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | perl -p -e 's/\n/, /g' | sed 's/. $/./'

