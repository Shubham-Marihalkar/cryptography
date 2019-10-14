#Program to find GCD of two nmbers

'''
    SAMMPLE OUTPUT
 GCD OF TWO NUMBERS
Enter first number 1234
Enter second number 5678
GCD of 1234 and 5678 is 2

'''

def gcd(m,n):
        if m==0:
             return n
        return(gcd(n%m,m))


#drive code
print(" GCD OF TWO NUMBERS")
m=int(input("Enter first number "))
n=int(input("Enter second number "))
print("GCD of "+str(m)+" and "+str(n)+" is "+str(gcd(m,n)))


