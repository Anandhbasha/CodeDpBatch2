# variable declaration in python
a,b,c = 10,"user",True

# swapping program
# a->b
# b->c
# c->a

# temp = b
# # temp = "User"
# b=a #b=10
# # user -> replace
# # a = c #a =True
# # c=temp #c= Temp

# a,b,c = c,a,b
# print(a,b,c)


# while 
# while(condition):
    # code

a=1
while(a<=10):
    print(a)
    a+=1

# Atm simulation
# Balance ->10000
# user 3 attempt 
# correct pin means ->checkBalance,Deposit,Withdraw,Exit
# Insufficient balance reject withdraw
# 3 time wrong pin means account blocked

balance = 10000
correctPin = 1234
attempt = 0
while(attempt<3):
    pin = int(input("Enter the Pin:"))
    if pin == correctPin:
        print("Login Sucessfull")
        choice = 0
        while choice<=4:
            print("\n 1.Check Balance")
            print("\n 2.Deposit")
            print("\n 3.Withdraw")
            print("\n 4.Exit")

            choice = int(input("Enter the Choice:"))
            if choice==1:
                print("Balance:",balance)
            elif choice==2:
                depAmount = int(input("Enter to the amount to deposit:"))
                if depAmount>0:
                    balance+=depAmount
                    print("Deposited Successfully")
                    print("Balanace:",balance)
                else:
                    print("Invalid amount")
            elif choice==3:
                wAmount = int(input("Enter the amount to withdrawn:"))
                if(wAmount<=balance and wAmount>0):
                    balance-=wAmount
                    print("Withdrawl Sucessfully")
                    print("Balance:",balance)
                else:
                    print("Insufficient Fund/Or invalid amount")
            elif choice==4:
                print("Thanks for using this ATM")
            else:
                print("Invaid Choice")
        break
    else:
        attempt+=1
        print("Wrong Pin")
        print("Attempt Left:",3-attempt)
if attempt==3:
    print("Account Loacked")

# for