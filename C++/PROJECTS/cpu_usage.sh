#!/bin/bash 
while :; do
  # Get the first line with aggregate of all CPUs
  echo "--- First callc"
  cpu_now=($(head -n1 /proc/stat)) 
  # Get all columns but skip the first (which is the "cpu" string) 
  cpu_sum="${cpu_now[@]:1}" 
  # Replace the column seperator (space) with + 
  echo "--- Make summ"
  cpu_sum=$((${cpu_sum// /+})) 
  # Get the delta between two reads 
  echo "--- Make cpu_sum - cpu_last_sum"
  cpu_delta=$((cpu_sum - cpu_last_sum)) 
  # Get the idle time Delta 
  echo "--- Make cpu_now[4]- cpu_last[4]"
  cpu_idle=$((cpu_now[4]- cpu_last[4])) 
  # Calc time spent working 
  echo "--- Make cpu_delta - cpu_idle"
  cpu_used=$((cpu_delta - cpu_idle)) 
  # Calc percentage 
  echo "--- Make 100 * cpu_used / cpu_delta)"
  cpu_usage=$((100 * cpu_used / cpu_delta)) 
  
  # Keep this as last for our next read 
  echo "--- Keeeep values cpu_last_sum=$cpu_sum cpu_last=("${cpu_now[@]}") "
  cpu_last=("${cpu_now[@]}") 
  cpu_last_sum=$cpu_sum 
  
  echo "CPU usage at $cpu_usage%" 
  
  # Wait a second before the next read 
  sleep 1 
done