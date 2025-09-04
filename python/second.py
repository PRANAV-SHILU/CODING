# exercise 1 : array
'''
city = [
    'bhavnagar',
    'rajkot',
    'surat',
    'ahmedabad',
    'baroda',
]
print(city)
print(city[0])
print(city[1])
print(city[2])
print(city[3])
print(city[4])
'''

#exercise 2 : array with string index
'''
instead of this,
bird='mor'
food='jalebi'
animal='lion'
'''

'''
india={
    'bird':'mor',
    'food':'jalebi',
    'animal':'lion',
}
print(india)
print(india['bird'])
print(india['food'])
print(india['animal'])
'''

#exercise 3 : for loop with array
'''
spices=[
    'salt',
    'pepper',
    'turmeric',
    'cumin',
    'coriander',
]

i=1
for spice in spices:     #spice = i variable,  spices=array name  LIKE : for i in spices
    print(i)
    print(spice)
    i += 1

print("\ndone")
'''

#exercise 4 : while loop
'''
i=5
print("while loop")
while i<=50:
    print(i)
    i+=5
print("done")
'''

#exercise 5 : typecasting, MUST USE int() & float() to convert string to int or float because INPUT() TAKES INPUT AS STRING
"""
value=input("enter value : ")
print(value," is my favourite value ")

print("\nstring value multiplied by 10, it writes it 10 time ")
print(value*10)

print(int(value)*10)
value=int(value)
print("\nafter converting to int and multiply by 10 ")
print(value*10)

meter=input("enter meter : ")
print("value in km = ",float(meter)/1000)
"""

#exercise 6 : string capitalize() & find() & print before-after 
"""
first='pranav'
last='shilu'

first_cap=first.capitalize()
print(first_cap)
print(last.capitalize())

note='award for trup trump'

f=note.find('trump')            #give location of first letter of whole word 
print(f)
print(note.find('trup'))        

text=note[f:]       #f: means after f location and :f means before f location, it also print f location itself
print(text)
print(note[:f])
"""

#exercise 7 : count() & pop() & remove()
"""
flips=[
    'head',
    'tail',
    'edge',
    'corner',
    'head',
    'tail',
    'last',
]

print(flips.count('head'))      #count tells how many times 'head' is there in array
print(flips)
print(flips.pop(1))         #removes 2nd element of array & prints which was removed
print(flips) 
flips.remove('edge')         #removes 'edge' from array
print(flips)
"""

#exercise 8 : class & function
"""
class attendee:         #class name , self is always 1st argument in function, self is current object
    def __init__(self,name,ticket):      #constructor name always __init__(self,...):
        self.name=name
        self.ticket=ticket

    def display(self):                  #function name
        print("Name : {}, Tickets : {}".format(self.name,self.ticket))

    def add(self):                       #function name
        self.ticket += 1
        print("{} got 1 more ticket, now total tickets are {}".format(self.name,self.ticket))

a=attendee("pranav",1)
b=attendee("bhargav",2)

a.add()
a.add()

a.display()
b.display()
"""

#exercise 9 : file handling
#infile & outfile are variable name given by me
#r=read , w=write , a=append
"""
infile=open("infile.txt","r") 
outfile=open("outfile.txt","w")

print("Proccessing inputs...")
sum=0

for line in infile:
    sum+=int(line)
    print(line.rstrip(), file=outfile) #rstrip() removes extra new line

print("\nTotal = " + str(sum), file=outfile)

outfile.close()
print("outfile closed")
infile.close()
print("infile closed")
"""

#exercise 10 : input with int & print with sep & end
"""
age = int(input("Enter your age: "))        #can only input interger, no need to typecast from str to int
print(f"You are {age} years old also {age*age}")   #effective to print with variables

print("A", "B", "C", sep="-")   #seprates each value with - 

print("Hello", end=" ")     #prints next line in same line
print("World")
"""
