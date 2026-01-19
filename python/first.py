# exercise 1 : print()
"""
print("Hello World")
print("Goodbye, World!")
"""

# exercise 2: input() & if/else conditional.
'''
name=input("what is name : ") #ask the user

print("nice meeting you",name,"yes") 

answer=input("enjoyed?")

if answer=="yes":
    print("great")
    print("yahuu")
else:
        print("sorry")
'''

#exercise 3: ** use and printing variable,  2**3 means 2*2*2
"""
message="this is going to be tricky ;)"
Message="very tricky!"
print(message)

result=2**3
print("2**3=",result)
result=5-3
print("5-3=",result)

print("challenge completed")
"""

#exercise 4: working with calender module



# exercise 5: if/else with string.
'''
plant="gulab"

if plant=="gulab":
    print("you passed")
else:
    print("you failed")
print("thanks")
'''

#exercise 6: define and call function.
'''
def shimmy():
    print("Shimmying!")

    print("Shimmying!!")

print("called once")
shimmy()
print("\ncalled twice")
shimmy()


def say_hello():
    print("\nHello, Friends!")

say_hello()
'''

#exercise 7: function with argument & `if` statements.
"""
def wash_car(amount):
    if(amount==12):
        print("Washing the car!")
        print("That will be $12.")
    if(amount==6):
        print("Washing the car!")
        print("That will be $6.")

wash_car(12)
wash_car(6)
wash_car(10)
"""

#exercise 8: function with argument & return value.
"""
def withdraw(bal,amount):
    if(bal>=amount):
        bal-=amount
        print("Withdrawn ",amount)
    else:
        print("Amount greater than balance")
    
    return bal

print("case 1")
bal=withdraw(1000,1500)
print("Balance: ",bal)

print("\ncase 2")
bal=withdraw(1000,990)
print("Balance: ",bal)

if(bal<100):
    print("\nlow balance")
else:
    print("enough balance")
"""

#exercise 9: function call with string.
'''
def fav_city(name):
    print("One of my favorite cities is",name)

fav_city("bhavnagar")
fav_city("rajkot")
fav_city("ahmedabad")
'''
