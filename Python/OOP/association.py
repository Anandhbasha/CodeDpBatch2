class Teacher:
    def __init__(self,name):
        self.x = name
    def teach(self,StudentName):
        print(self.x,"Teacher is Teaching",StudentName.name)
class Student:
    def __init__(self,name):
        self.name = name

t =Teacher("Mugunthan")
s = Student("Kumudhan")

t.teach(s)