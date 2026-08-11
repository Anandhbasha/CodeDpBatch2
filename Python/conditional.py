# if
# if condition:
    # code
# {}-> here we will not use
age = int(input("Enter your age:"))
# if age>=18:
#     print("Eligible to vote")

# if else
if age>=18:
    print("Eligible to vote")
else:
    print("not eligible to vote")
# elif
signal =input("Enter the Signal Status:")
if signal=="Green":
    print("We can move")
elif signal=="Red":
    print("We need to stop")
else:
    print("We can ready")