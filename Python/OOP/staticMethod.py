# class students:
#     @staticmethod
#     def __init__(name,mark):
#         name = name
#         mark = mark
#         print("The Student Name is:",name)
#         print("The Student Marks is:",mark)

# students("Praveen",73.8)
# students("Parthiba",71.8)




class students:    
    def __init__(self,name,mark):
        name = name
        mark = mark
    @staticmethod
    def display(name,mark):
        return students(name,mark)
    def showStudent(self):
        print("StudentName:",self.name)
        print("StudentName:",self.mark)


# students("Praveen",73.8)
# students("Parthiba",71.8)

students = students.display("Praveen",82.3)
students.showStudent()