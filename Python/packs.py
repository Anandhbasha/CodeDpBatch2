# import math

# print(math.sqrt(25))
# print(math.factorial(5))
# # 1*2*3*4*5
# # 120
# print(math.ceil(4.1))
# print(math.floor(4.8))
# print(math.pi)
# print(math.pow(3,2))
# # 3*3

# import random

# print(random.randint(1000,9999))
# print(random.random())
# # choice
# li = ["Apple","Samsung","xiomi","Vivo","oppo"]
# print(random.choice(li))

# system = random.randint(1,3)
# user = int(input("Enter the number to guess: 1 to 3:"))
# if system==user:
#     print("You wins")
# else:
# #     print("Sys won")


# # datetime
# from datetime import datetime

# now = datetime.now()

# print(now)
# print(now.year)
# print(now.month)
# print(now.day)
# print(now.date())
# print(now.hour)


# import calendar
# from zoneinfo import ZoneInfo

# year = 2026
# month = 1
# print(calendar.month(year,month))


# india = datetime.now(ZoneInfo("Asia/Kolkata"))
# USA = datetime.now(ZoneInfo("America/New_york"))
# uk = datetime.now(ZoneInfo("Europe/London"))


# print(india.strftime("%d-%m-%Y %I:%M:%S %p"))
# print(USA.strftime("%d-%m-%Y %I:%M:%S %p"))
# print(uk.strftime("%d-%m-%Y %I:%M:%S %p"))


# today = datetime.now()
# print(calendar.month(today.year,today.month))



# import os

# print(os.getcwd())
# print(os.listdir())

# # os.mkdir("Home")
# # print("Directory created Sucessfully")

# # file = open("Home/new.py",'w')
# # file.close()

# print(os.path.exists("foloop.py"))

# os.remove("Home/new.py")
# print("Removed Sucessfully")

# os.rmdir("Home")


# # statistics
# import statistics
# # find avg
# sales = [12000,11350,12456,8213,5000,8943]
# print(statistics.mean(sales))
# print(statistics.fmean(sales))

# # middle value 
# print(statistics.median(sales))
# print(statistics.median_low(sales))
# print(statistics.median_high(sales))
# print(statistics.median_grouped(sales))


# # mode
# cs = [99,98,98,97,96,95,99]

# print(statistics.mode(cs))
# print(statistics.multimode(cs))


# # Spread/Dispersion
# data = [10,20,30.40,50]
# print(statistics.variance(data))
# print(statistics.pvariance(data))
# print(statistics.stdev(data))
# print(statistics.pstdev(data))




# # collections
# from collections import Counter,deque

# names = ["Bala","Kavi","Aruvi","Arun","Arun","Arun"]
# res = Counter(names)
# print(res)

# # deque
# d = deque([10,20,30,40])
# d.append(40)
# d.appendleft(5)
# print(d)
# d.pop()
# d.popleft()
# print(d)

# d.extend([70,60])
# d.extendleft([0,-1])
# print(d)
# d.rotate(4)
# print(d)


# # time
# import time

# print("start")

# time.sleep(3)
# print("End")
# re
# regular expression
# re.match
import re
# text = "Python is easy"
# res = re.match("Python",text)
# print(res)

# password = input("Enter Password:")

# # atleast one Cap
# # atleast one Small
# # atleast one number
# # atleast one Spec
# # min length of password 8
# # regex
# pat = r"^(?=.*[A-Z])(?=.*[a-z])(?=.*\d)(?=.*[@#$%&!])[A-Za-z\d@#$%&!]{8,}"

# if re.match(pat,password):
#     print("Strong Password")
# else:
#     print("Weak Password")


# # ?=.*
# # A-Z

# # re.search
# newtext = "My phone number is 6411544545"
# res = re.search(r"\d{10}",newtext)
# print(res.group())
# re.findall()
text = "apple 10 banana 15 orange 20"
number = re.findall(r"\d+",text)
print(number)
# re.finditer()
for x in re.finditer(r"\d+",text):
    print(x.group())
# re.split()
newtexts = "apple,banana,orange"
res = re.split(r"[,:]",newtexts)
print(res)
# re.sub()
neres = re.sub("banana","watermelon",text)
print(neres)
# re.fullmatch()
userText = "12345678"
ures = re.fullmatch(r'\d+',userText)
print(ures)
# re.compile()

com= "apple 10 ,banana 15 ,orange 20"
pattern = re.compile(r"\d+")
te = pattern.findall(com)
print(te)