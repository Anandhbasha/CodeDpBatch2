class addition:
    def __init__(self,value):
        self.v = value
    def __add__(self,other):
        return self.v+other.v

a = addition(10)
b = addition(20)

print(a+b)