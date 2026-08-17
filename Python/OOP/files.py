# write
# read
# append
# del or remove

# create file
# open file
# do any operation
# close

# read
# write
# append
# create new file
# read and write
# write and read
# append and read

# create
# file = open("new.txt",'w')
# file.close()
# print("File created sucessfully")

# in this method files doesn't exist means it will created
# if already exists old content will replaced 

# file = open("news.txt",'x')
# file.close()
# print("File created sucessfully")

# # write
# file = open("new.txt","w")
# file.write("Hello python")
# file.close()
# print("Data inserted sucessfully")

# write multiple lines 

# file = open("new.txt","w")
# data = ["Arun\n","David\n","Pandu\n"]
# file.writelines(data)
# file.close()
# print("Data inserted sucessfully")


# file = open("new.txt","r")
# data = file.read()
# print(data)
# file.close()



# file = open("new.txt","r")
# data = file.read(5)
# print(data)
# file.close()


# file = open("new.txt","r")
# data1 = file.readline()
# data = file.readline()
# print(data)
# print(data1)
# file.close()

# file = open("new.txt","r")
# data = file.readlines()
# print(data)
# file.close()


# # using for loop
# file = open("new.txt","r")

# for l in file:
#     print(l)
# file.close()


# file = open("new.txt","a")
# file.write("Veera")
# file.close()


# file = open("new.txt","r")
# for l in file:
#     print(l)
# file.close()


# with open()

# with open("new.txt","r") as file:
#     data = file.read()
#     print(data)

# file = open("new.txt",'r')
# print(file.tell())
# file.read(5)
# # cursor 5 letters read ->6
# file.seek(10)
# print(file.tell())


#delete file
# import os
# os.remove("news.txt") 
# print("File removed Sucessfully")


# with open("new.txt","x") as file:
#     file.write("Welcome to python file Handling")

# print("File Created Sucessfully")

# import os
# os.rename("new.txt","data.txt")
# print("File renamed sucessfully")


# with open("data.txt","w+") as file:
#     file.write("Hello Python")
#     file.seek(0)
#     print(file.read())

# with open("data.txt","a+") as file:
#     # file.seek(15)
#     file.write("Hello Python")    
#     file.seek(0)
#     print(file.read())


# with open("data.txt","r") as file:
#     data = file.read()

#     if "Pythons" in data:
#         print("Word Found")
#     else:
#         print("Word Not found")


# with open("data.txt","r") as file:
#     data = file.read()

# res = data.replace("Python","Java")

# with open("data.txt","w") as file:
#     file.write(res)



with open("data.txt","r") as a:
    data = a.read()
with open("backupu.txt","w") as b:
    b.write(data)
print("Backuped Sucessfully")