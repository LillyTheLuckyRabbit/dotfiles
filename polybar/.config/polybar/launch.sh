#!/bin/bash

IFS=$'\n'

for m in $(polybar --list-monitors); do
	MONITOR=$(echo $m | cut -d":" -f1) polybar --reload left &
	MONITOR=$(echo $m | cut -d":" -f1) polybar --reload center &
	MONITOR=$(echo $m | cut -d":" -f1) polybar --reload right &
	MONITOR=$(echo $m | cut -d":" -f1) polybar --reload rightbat &
done
