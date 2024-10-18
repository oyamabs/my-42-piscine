#!/bin/sh
id -Gn $FT_USER | tr " " "," | xargs echo -n
