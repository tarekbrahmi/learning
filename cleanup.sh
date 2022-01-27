#!/bin/sh
echo "Cleaning up executables ..."
recurse() {
  path=$1
  if [ -d "$path" ] ; then
     for i in "$path/"*
     do
        recurse "$i"
     done
  elif [ -f "$path" ] ; then
    if [ -x "$path" ] ; then
        rm "$path"
    fi
  fi
}
recurse "$1"