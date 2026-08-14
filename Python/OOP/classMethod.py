# class students:
#     def __init__(self,name,mark):
#         self.name = name
#         self.mark = mark
#     def display(self):
#         print("The Student Name is:",self.name)
#         print("The Student Marks is:",self.mark)

# s1 = students("Praveen",73.8)
# s1.display()
# s2 = students("Parthiba",71.8)
# s2.display()
# # s1,s2-> Object name 
# # display() instance


class students:
    @classmethod
    def __init__(cls,name,mark):
        cls.name = name
        cls.mark = mark
    def display(cls):
        print("The Student Name is:",cls.name)
        print("The Student Marks is:",cls.mark)

students("Praveen",73.8)
students.display()
students("Parthiba",71.8)
students.display()
# s1,s2 ->cls

