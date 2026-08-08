list = [10,20,30,40,50,60]
print(list)
# listName[startvalue of index:next value of end value:skip step]
print(list[1::2])
# it will skip one index

# list have negative
# list[0] = 10 ->list[-6]
# list[1] = 20 ->list[-5]
# list[2] = 30 ->list[-4]
# list[3] = 40 ->list[-3]
# list[4] = 50 ->list[-2]
# list[5] = 60 ->list[-1]

# print(list[-1])

# print(list[-1])
# print(list[-2])
# print(list[-3])
# print(list[-4])
# print(list[-5])
# print(list[-6])
print(list[::-1])
# -1 =60
# -1 = 50

user = "Aravind"
print(user[::2])
x =(101,102,103,104,105)
print(x[3:])