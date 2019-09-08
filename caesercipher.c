/*
            CAESER CIPHER ENCRYPTION
    Sample Output
Enter the plain text
happy
Enter the key
key=3
The cipherText is: kdssb

Note:
* This program excludes the spaces and special characters and encrypts the text so after decryption we get continues plain text
*/

#include <stdio.h>

int main()
{
   printf("*********** CAESER CIPHER ENCRYPTION***********\n");
   printf("Working flow of the program\nExample\nEnter the plain text\n");
   printf("abc\n");
   printf("Enter the key\nkey=2\n");
   printf("Ciphered text is :cde\n");
   printf("*************************************\n\n\n");

    //main program of CAESER cipher
   int i,j=0,key;
   char plainText[100];//string for plain text
   char cipherText[100];//string for cipher text
   printf("Enter the plain text\n");
   gets(plainText);//input plain text
   printf("Enter the key\nkey=");
   scanf("%d",&key);//input key
   //loop to travel through the plain text and convert to cipher text
   for(i=0; plainText[i]!='\0'; i++)
   {
       //for uppercase
        if(plainText[i]>64&&plainText[i]<=90)
        {
            //plain text is scaled to 1 to 26 as English alphabets are 1to 26
            //then after scaling key is added then converted to the respective ASCI value by adding 64
            cipherText[j]=((plainText[i]-64+key)%26)+64;
            j++;
        }
        //for lower case
        else if(plainText[i]>96&&plainText[i]<=123)
        {
            //plain text is scaled to 1 to 26 as english alphabets are 1to 26
            //then after scaling key is added then converted to the respective ASCI value by adding 96
            cipherText[j]=((plainText[i]-96+key)%26)+96;
            j++;
        }
   }
   cipherText[j]='\0';//to end the ciphered string
    printf("The cipherText is: ");
    printf("%s",cipherText);//output ciphered text
    return 0;
}


