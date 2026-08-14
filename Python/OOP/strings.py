class Person:
    def __init__(self,name):
        self.x = name
    def __str__(self):
        return self.x
    # def passingName(self):
    #     return self.x

s = Person("Amul")
print(s)