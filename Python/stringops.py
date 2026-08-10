# # createString
# name = "Hello"
# name1 = 'Hello Python'
# name2 = """Python Programming"""

# print(name)
# print(name1)
# print(name2)

# # indexing
# text = "Python Program"
# # p->0
# # y->1
# # t->2
# # h->3
# # 0->4
# # n->5
# # null->6
# # P->7
# # r->8
# print(text[2])
# print(text[-1])
# # slicing
# print(text[::-1])

# # len
# print(len(text))
# # concatenation
# print(name+" "+name2)
# # repetition
# # *
# s="Hi"
# print(s*3)
# # Membership
# news = "Python code"
# print("p" in news)
# print("p" not in news)
# print("java" not in news)
# # upper
# print(news.upper())
# # lower
# print(news.lower())
# # capitilaize
# print(news.capitalize())
# # title
# print(news.title())
# s = "PyThOn"
# # swapcase
# print(s.swapcase())
# # strip
# s =" python  "
# print(s)
# print(s.strip())
# # lstrip
# print(s.lstrip())
# # rstrip
# print(s.rstrip())
# # find
# newtext ="Hello this is anandhakumar"
# print(newtext.find("praveen"))
# # rfind
# print(newtext.rfind("anandh"))
# # index
# print(newtext.index('t'))
# # print(newtext.index('x'))
# # rindex
# print(newtext.rindex("Hello"))
# # count
# print(newtext.count('a'))
# # replace
# print(newtext.replace("anandhakumar","Praveen"))
# # startswith
# print(newtext.startswith("hello"))
# # endswith
# print(newtext.endswith("anandhakumar"))
# # split/join
# x = newtext.split()
# print(x)
# textWord = 'apple,banana,mango,orange'
# y = textWord.split(",")
# print(y)
# print("/".join(y))

# # isalpha
# print("Python".isalpha())
# # isdigit
# print("12345".isdigit())
# # isalnum
# print("Python1234".isalnum())
# # isspace
# print("".isspace())
# # islower
# print("python".islower())
# # isupper
# print("PYTHON".isupper())
# # istitle
# print("Hello This Is String Method".istitle())
# # fstring
# name= "Arul"
# age = 18
# print(f"The name is:{name} and I am {age}")
# print(f"The name is: {name}  and I am:  {age}")
# format
name= "Arul"
age = 18
print("The name is:{} and I am {}".format(name,age))
# iteration
s = "This python String Methods"
for c in s:
    print(c)


text = "King Maker"

print(text.partition(" "))
