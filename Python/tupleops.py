t=(10,230,30,40,50)
# create tuple
x =()
# empty
# indexing
# slicing
# length
# membership
# Repetition
# count
# index
# packing
person = "Moorthy",25,"Java"
print(person)
# unpacking
name,age,course = person
print(name)
print(age)
print(course)
# Extended Unpacking
numbers = (10,20,30,40,50,60)
# 3
# a=1
# b=1
# c=4
# a=1
# c=1

a,*b,c = numbers
print(a)
print(b)
print(c)

# tuple Comparision
a=(1,2,3)
b=(1,2,4)

print(a==b)
print(a<b)
print(a>b)