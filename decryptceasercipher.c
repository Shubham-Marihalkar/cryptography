/*
        CAESER CIPHER DECRYPTION
    Sample output
Enter the cipher text
kdssb
Enter the key
key=3
The plainText is: happy


Note:
*This program removes spaces and special characters from cipher text thus resulting in continues plain text
*/




#include <stdio.h>

int main()
{
   printf("*********** CAESER CIPHER DECRYPTION ***********\n");
   printf("Working flow of the program\nExample\nEnter the cipher text\n");
   printf("cde\n");
   printf("Enter the key\nkey=2\n");
   printf("Plain text is :abc\n");
   printf("*************************************\n\n\n");

   //MAIN PROGRAM FOR DECRYPTION OF CAESER CIPHER
   int i,j=0,key;
   char cipherText[100];//string for cipher text
   char plainText[100];//string for plain text
   printf("Enter the cipher text\n");
   gets(cipherText);//input cipher text
   printf("Enter the key\n");
   printf("key=");
   scanf("%d",&key);//input key

   //for loop to travel through cipher text
   for(i=0; cipherText[i]!='\0'; i++)
   {
       //for upper case
        if(cipherText[i]>64&&cipherText[i]<=90)
        {

            cipherText[i]=cipherText[i]-65-key;//scale text and subtract key
            //compare value of letter
            //if positive then scale and add 65 to convert to respective ASCI value
            //else add 26 and then add 65 to convert to ASCI value
            cipherText[i]=(cipherText[i]>=0)?((cipherText[i]%26)+65):((cipherText[i]+=26)+65);
            plainText[j]=cipherText[i];//copy to plain text
            j++;
        }
        //for lower case
        else if(cipherText[i]>96&&cipherText[i]<123)
        {
            cipherText[i]=cipherText[i]-97-key;//scale and subtract key
            //compare value of letter
            //if positive then scale and add 97 to convert to respective ASCI value
            //else add 26 and then add 97 to convert to ASCI value
            cipherText[i]=(cipherText[i]>=0)?((cipherText[i]%26)+97):((cipherText[i]+=26)+97);
            plainText[j]=cipherText[i];//copy to plain text
            j++;
        }
   }
   plainText[j]='\0';//to indicate end of plainText string
    printf("The plainText is: ");
    printf("%s",plainText);
    return 0;
}

