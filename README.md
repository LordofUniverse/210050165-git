# 210050165-git

| Roll No | Name |
| ----------- | ----------- |
| 210050165 | Vinu Rakav S |

## What is the repository about?
It has code of **polynomial hash function** which can be used to create a map between strings and integers in a given range. <br>
We can use this hash function to store some strings in dictionary. Like for storing names of some people working in a company.
To make the search and retrive work fast, we use hash function.

## How to run the code?
To run the code, either clone the repository by *git clone https://github.com/LordofUniverse/210050165-git.git* or download the zip folder and unzip it. <br>
### Run the following commands:<br>
>cd 210050165-git/ <br>
>chmod +x test.sh<br>
>./test.sh `string` <br>
In the above command, instead of `string`, type the string that you want to hash
  
## Solution to q1:
### sizeOfFiles:
`alias sizeOfFiles="du -a -h"`

- When I call `sizeOfFiles`, it executes the command `du -a -h`.<br>
- `du` is used to return the space of all directories and the directories inside it in a folder.<br>
- `-a` is used to return space of all files along with directories.<br>
- `-h` is used to return space size in human readable format<br>

### numberOfFiles
- When I call `numberOfFiles`, it executes the command `find . | wc -l`.<br>
- `find` is used to search through all directories and files in a folder.<br>
- `.` is used to denote that find has to start from the current directory.<br>
- `wc -l` is used to return count of all the files and folders the `find` will return.<br>

## polynomial hash function:
hashstring(String s) = $(\sum_{i = 0} s[i]\*p^i)$ % m
