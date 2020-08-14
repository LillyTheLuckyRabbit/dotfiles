#!/usr/bin/env bash

wid=$1
class=$2
instance=$3
consequences=$4

# lowercase compare
if [[ "${class,,}" == "steam" ]]; then
  # set all dialogue type windows to actually be dialogues
  if xprop -id "$wid" -len 512 | grep -qs 'program specified maximum size'; then
    xprop -id "$wid" \
      -f _NET_WM_WINDOW_TYPE 32a \
      -set _NET_WM_WINDOW_TYPE _NET_WM_WINDOW_TYPE_DIALOG &>/dev/null
    echo "manage=on border=on"
  fi
fi
