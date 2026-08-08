# set
# empty set
s = set()
# print(type(s))
# x ={}
# print(type(x))
s.add(10)
s.add(20)
s.add(30)
s.add(40)
s.add(50)
print(s)
s.update([70,80,90])
# print(s)
# s.remove(20)
# print(s)
s.discard(20)
print(s)
s.pop()
print(s)
s.clear()
# print(s)
# del s
# print(s)

# union
s ={1,2,3}
a ={6,5,3,4}
# print(a.union(s))
print(a | s)

# intersection
print(a.intersection(s))
print(a & s)

# diff
print(a.difference(s))
print(a-s)

# symmetric diff
print(a.symmetric_difference(s))
print(a^ s)

# subset
a={1,2}
s={1,2,3,4}
print(a.issubset(s))
print(a <=s)

# superset
a={1,2}
s={1,2,3,4}
print(s.issuperset(a))