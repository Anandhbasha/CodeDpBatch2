class Users:
    def __init__(self,name):
        self.x = name
        print("Constructor Created")
    def __del__(self):
        print("Destructor Created")

u = Users("Vicky")
print(u.x)
del u
print(u.x)