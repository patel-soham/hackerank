"""
Task
Given  names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. 
You will then be given an unknown number of names to query your phone book for. 
For each  queried, print the associated entry from your phone book on a new line in the form name=phoneNumber; 
if an entry for  is not found, print Not found instead.
"""


# Enter your code here. Read input from STDIN. Print output to STDOUT
total_lines = int(input())
phonebook = {}

for i in range (total_lines):
    line = input().split(" ")
    phonebook[line[0]] = line[1]
    
while(1):
    try:
        check = input()
        if check in phonebook:
            print(check+"="+phonebook[check])
        else:
            print("Not found")
    except:
        break

"""
Sample Input:
3
sam 99912222
tom 11122222
harry 12299933
sam
edward
harry

Sample Output:
sam=99912222
Not found
harry=12299933
"""
