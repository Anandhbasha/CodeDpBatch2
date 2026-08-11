# import math

# print(math.sqrt(25))
# print(math.factorial(5))
# # 1*2*3*4*5
# # 120
# print(math.ceil(4.1))
# print(math.floor(4.8))
# print(math.pi)
# print(math.pow(3,2))
# 3*3

import random

print(random.randint(1000,9999))
print(random.random())
# choice
li = ["Apple","Samsung","xiomi","Vivo","oppo"]
print(random.choice(li))

system = random.randint(1,3)
user = int(input("Enter the number to guess: 1 to 3:"))
if system==user:
    print("You wins")
else:
    print("Sys won")