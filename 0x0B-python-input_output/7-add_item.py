#!/usr/bin/python3
import json
import sys
import os.path as path

save_to_json_file = __import__('5-save_to_json_file').save_to_json_file
load_from_json_file = __import__('6-load_from_json_file').load_from_json_file

basic_entry = []
if path.exists('add_item.json') is True:
    basic_entry = load_from_json_file('add_item.json')
for i in range(1, len(sys.argv)):
    basic_entry.append(sys.argv[i])
save_to_json_file(basic_entry, 'add_item.json')
