#Program to check weather a number is prime or not

'''
        SAMPLE OUTPUT
Program to check weather a number is prime or not
Enter number to be checked for prime number 9999999967
9999999967 is a prime number

'''


def isprime(n):
        if(n==0 or n==1):
                print(str(n)+" is neither prime nor composite")
        else:
                for i in range(2,int(n**0.5)):
                        if(n%i==0):
                                return False
                return True
        
#drive code
print("Program to check weather a number is prime or not")
n=int(input("Enter number to be checked for prime number "))
if isprime(n):
    print(str(n)+" is a prime number")
else:
    print(str(n)+" is not a prime number")




