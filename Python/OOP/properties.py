class Stu:
    def __init__(self,mark):
        self._mark = mark
    @property
    def mark(self):
        return self._mark
s = Stu(90)
print(s.mark)
# method mark()
# property-> will help to call method like a variable

# property+Setter
# class Stu:
#     def __init__(self,mark):
#         self._mark = mark
#     @property
#     def mark(self):
#         return self._mark
#     @mark.setter
#     def mark(self,value):
#         if 0<=value<=100:
#             self._mark = value
#         else:
#             print("Invalid Mark")
# s = Stu(90)
# print(s.mark)
# s.mark = 100
# # s.mark(100)
# print(s.mark)
# s.mark = 105


# property+setter+deleter

class Stu:
    def __init__(self,mark):
        self._mark = mark
    @property
    def mark(self):
        return self._mark
    @mark.setter
    def mark(self,value):
        if 0<=value<=100:
            self._mark = value
        else:
            print("Invalid Mark")
    @mark.deleter
    def name(self):
        del self._mark
s = Stu(90)
print(s.mark)
s.mark = 100
# s.mark(100)
print(s.mark)
s.mark = 105
del s.name
print(s.mark)