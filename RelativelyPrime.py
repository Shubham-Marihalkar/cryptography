#PROGRAM TO CHECK THE GIVEN TWO NUMBERS ARE RELATIVELY PRIME
'''
LOGIC:
        TWo numbers are relatively prime if their GCD=1

    SAMPLE OUTPUT
case 1: not relatively prime
Ouput:
PROGRAM TO CHECK THE TWO NUMBERS ARE RELATIVELY PRIME
Enter first number 40
Enter second number 4
40 and 4 are not relatively prime numbers

case 2: Relatively prime
Output:
PROGRAM TO CHECK THE TWO NUMBERS ARE RELATIVELY PRIME
Enter first number 40
Enter second number 3
40 and 3 are relatively prime numbers

'''

#GCD CFUNCTION
def gcd(m,n):
     #Euclid's algorithm to find gcd is used
        if m<n:
            temp=m
            m=n
            n=temp

        rem=m%n #rem to store reminder
        while(rem!=0):
            rem=m%n
            m=n
            n=rem
        return m

#Drive code
print("PROGRAM TO CHECK THE TWO NUMBERS ARE RELATIVELY PRIME")
m=int(input("Enter first number "))
n=int(input("Enter second number "))
if gcd(m,n)==1:
    print(str(m)+" and "+str(n)+" are relatively prime numbers")
else:
    print(str(m)+" and "+str(n)+" are not relatively prime numbers")
    

