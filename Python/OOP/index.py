# class Classname
    # variable name
    #methods

# instance

# class CodeDp:
#     courses = ["Tier1","Tier2","Tier3"]
#     def Tier1Course(self):
#         print("This is Batch2 Tier1")
#     def Tier2Course(self):
#         print("This is Batch2 Tier2")
#     def Tier3Course(self):
#             print("This is Batch2 Tier3")

# s1 = CodeDp()
# print(s1.courses)
# s1.Tier1Course()

# access specifier
# private
# protected
# public
# Encapsulation
class Employee:
    __Salary = 42000
    def increment(self,amount):
        self.__Salary+=amount
    def incentive(self,amount):
        self.__Salary+=amount
    def lop(self,amount):
        self.__Salary-=amount
    def currentSalary(self):
        return self.__Salary
e1 = Employee()
e1.lop(3000)
print(e1.currentSalary())
# abstrction

from abc import abstractmethod
class Payment:
    @abstractmethod
    def Pay(self):
        pass
class Gpay(Payment):
    def Pay(self):
        print("Paid by Gpay")
class PhonePe(Payment):
    def Pay(self):
        print("Paid by PhonePe")
class UPI(Payment):
    def Pay(self):
        print("Paid by UPI")

g = Gpay()
g.Pay()
p = PhonePe()
p.Pay()
u = UPI()
u.Pay()
# inheritence
# simple
# multiple
# multilevel
# hybrid
# hyrachical
# polymorphism
# # overloading
# class calculator:
#     def add(self,a,b):
#         print(a+b)
#     def add(self,a,b,c):
#         print(a+b+c)
# # compostion

# class uniform:
#     monday,friday = "sport Uniform","sport Uniform"
#     otherWeekdays = "Normal Uniform"
#     saturday = "Color dress"
#     def sports(self):
#         print("Monday and Friday the have PET Period")
#     def WeekDays(self):
#         print("We don't have PET Period")
# class Student:
#     def __init__(self):
#         # constructor function->dont want to call
#         self.s1 = uniform()
#         self.s1.sports()
#         self.s1.WeekDays()
#         print(self.s1.otherWeekdays)
# S1 = Student()
        
# # aggregation
# class Stud:
#     def __init__(self,name):
#         self.name = name
# class Dept:
#     def __init__(self,name,student):
#         self.name= name
#         self.student= student
#     def display(self):
#         print(self.student.name,"belongs to",self.name)
# s = Stud("Aravind")
# d = Dept("Computer Science",s)
# d.display()
# super

class Person:
    personName = "Aravind"
class Activity(Person):
    personName = "Aravind s"
    personTalent = "Cricket"

    def show(self):
        print("Person Name:",super().personName)

A = Activity()
A.show()