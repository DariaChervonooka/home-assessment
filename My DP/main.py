from itertools import count
import json, argparse, os, sys, requests, random, wget

cli_object = argparse.ArgumentParser(description='This program for find all duplicate lines in given text.txt ad divide the, into groups')
cli_object.add_argument('-f', '--file', action='store', type=str, help='path to our local txt file')
args = cli_object.parse_args()
#check argument "file" exist
if (args.file == None): 
   cli_object.print_help()
   sys.exit(0)

file_name = args.file
txt_file = open(file_name)
txt_data = txt_file.read()

#converting symbols -> lines
txt_data_list = []
str=''
for n in txt_data: 
   if n != '\n':
      str +='' + n
   else:
      txt_data_list.append(str)
      str=''

#find dublicate and count them. Tnen add this in dict
dictWithDublAndCount = {}
for n in txt_data_list: 
   if (txt_data_list.count(n)>1) and (n not in dictWithDublAndCount):
      dictWithDublAndCount[n]=txt_data_list.count(n)

a=input('If you want to see information in terminal print "yes". If you want to save information in new file -- print file name: ')
if (a == 'y') or(a=='yes')or (a=='Y') or (a=='Yes'):
#way to display the dictionary for easy reading
   for w,c in dictWithDublAndCount.items(): 
     print(f"word \'{w.title()}\' count in file: {c}")
else:
#save information in new txt file
   file = open(a+".txt", "w")
   for w,c in dictWithDublAndCount.items(): 
     file.write(f"word \'{w.title()}\' count in file: {c}")
     file.write("\n")
   file.close()
   