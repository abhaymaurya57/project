#password generator using python
import random


letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
         'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 
         'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
         'y', 'z']
number = ['1','2','3','4','5','6','7','8','9','0']
symbol = ['!','@','#','$','%','&','*','+']
print("welcom to passord generator")
n_letters = int(input("How many letter you want in your password?\n"))
n_symbols = int(input("How many symbol you want in your password?\n"))
n_numbers = int(input("How many number you want in your password?\n"))
password=""
for i in range(1,n_letters+1): # 1,2,3,4
    char=random.choice(letters)
    password=password+char
for  i in range(1,n_symbols+1):
    char =random.choice(symbol)
    password=password+char
for  i in range(1,n_numbers+1):
    char =random.choice(number)
    password=password+char
print(password) 
password =""
for char in password:
    password = password + char
print(password)