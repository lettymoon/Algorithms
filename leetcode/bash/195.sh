# 195. Tenth Line

# Read from the file file.txt and output the tenth line to stdout.
#!/bin/bash

line=1

while read -r lineContent
	do
        if [ $line -eq 10 ]
        then
		        echo "$lineContent"
        fi
    ((line++))
done < "file.txt"