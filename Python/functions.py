# def greet(): 
#     print("Welcome to Python")
# greet()

# def -> keyword to create the function
# greet -> function name
# ()-> parameter bracket
# greet()-> function call
# without parameter

# def greet(name): 
#     print(f"Welcome to Python {name}")

# greet("Arivu")


# default parameter
# def greet(name = "Anbu"):
#     print("Hello",name)

# greet()
# greet("Arivu")


# keyword arguments
# def greet(name,age):
#     print("Hello",name)
#     print(name," age is",age)

# greet(age=10,name="Arivu")

# def greet(name,age):
#     print("Hello",name)
#     print(name," age is",age)

# greet("Arivu",10)


# # multiple positional arguments
# def add(*a):
#     #*a->list
#     x= a[0]
#     y = a[1]
#     z = a[2]
#     q = a[3]
#     print("Add value is:",x+y+z)
#     print("Add value is:",x+y+z+q)
# # add(10,20,30)
# add(10,20,30,40)


# multiple key value args
def stud(**detail):
    print(detail)

stud(name="Ajay",age=18,course="Python")

x=100
# scope
def test():
    global x
    x=10
    print(x)
test()
print(x)


square = lambda x: x*x

print(square(4))