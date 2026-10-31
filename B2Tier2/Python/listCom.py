# # newList = [expression for item in iterable if condition]

# lst = [1,2,3,4,5]
# # square =[]

# # for i in lst:
# #     square.append(i**2)
# #     # 1**2->2
# #     # 2**2->4
# #     # 
# # print(square)

# # square = [num**2 for num in lst]
# # # print(square)
# # odd = [o for o in square if o%2!=0]
# # print(odd)

# # even = [x for x in range(1,101) if x%2==0]
# # print(even)

# marks =[35,80,22,95,40]

# res = ["Pass" if mark >=35 else "Fail" for mark in marks]
# print(res)
# # for mark in marks:
# #     if mark>=35:
# #         print("pass")
# #     else:
# #         print("fail")


# # lambda
# # def functionname():

# # square = lambda x: x*x

# # print(square(5))

# # calGst = lambda price:price*1.18

# # print(calGst(90))


# # prices = [100,200,300,400,500]
# # # newPrice = list(map(lambda price:price*1.18,prices))
# # # print(newPrice)


# # above = list(filter(lambda price:price>200,prices))
# # print(above)



# namelist = ["Arun","Ajay","Balu"]
# marks = [60,58,74]
# # 0
# # 1
# # 2
# # for index,name in enumerate(namelist,start=1):
# #     print(index,name)

# for name,mark in enumerate(zip(namelist,marks),start=1):
#     print(name,mark)


# def add(*a):
#     # tuple a = (10,20,30)
#     for i in a:
#         print(i)

# # add(10,20)
# add(10,20,30)
# add(10,20)
# add(10,20,40,60)

# # **-> key value
# def stuDetails(**detail):
#     for key in detail.values():
#         print(key)

# stuDetails(name="Ragav",age=20,city="CBE")
# num1 = int(input("Enter the number:"))
# num2 = int(input("Enter the number2:"))
# res = num1/num2
# print(res)

try:
    num1 = int(input("Enter the number:"))
    num2 = int(input("Enter the number2:"))
    res = num1/num2
    print(res)
except ZeroDivisionError:
    print("Cannot divide by Zero")
except ValueError:
    print("Enter the valid number")

print("program Completed")