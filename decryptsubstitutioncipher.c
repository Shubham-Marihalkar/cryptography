/*
        SUBSTITUTION CIPHER DECRYPTION
Sample output
Enter the Cipher text
lkppy birtldky
Enter the number of alphabets to be replaced
2
Enter the alphabets to be replaced without space
lk
Enter the replacement alphabets
ha
Plain text is
happy birthday
*/

#include<stdio.h>

int main()
{
    printf("********** SUBSTITUTION CIPHER DECRYPTION **********\n");
    printf("Working flow of the program\nExample\n");
    printf("\nEnter the Cipher text\nbat\n");
    printf("Enter the number of alphabets to be replaced\n2\n");
    printf("Enter the alphabets to be replaced without space\nab\n");
    printf("Enter the replacement alphabets\ncd\n");
    printf("Plain text is\ndct\n");
    printf("***************************************\n\n\n");


    //main program
    char ciphertext[100],plaintext[100];//strings to store plain text and cipher text
    //input plain text
    printf("\nEnter the Cipher text\n");
    gets(ciphertext);

    int alphanum;//to read number alphabets to be replaced

    //input number of alphabets to be replaced
    printf("Enter the number of alphabets to be replaced\n");
    scanf("%d",&alphanum);

    //input the replacement table in form of two strings
    char letter[alphanum],replacewith[alphanum];

    printf("Enter the alphabets to be replaced without space\n");
    getchar();
    gets(letter);//input characters to be replaced

    printf("Enter the replacement alphabets\n");
    gets(replacewith);//input characters to be replaced as


    int i,j;
    //loop to travel through cipher text
    for(i=0;ciphertext[i]!='\0';i++)
    {
        //loop to find presence of cipher text character in the replacement table
        //if yes then replace it
        for(j=0;letter[j]!='\0';j++)
        {
            //find the occurrence if found then replace else keep as it is
            if(ciphertext[i]==letter[j])
                {
                    plaintext[i]=replacewith[j];
                    break;//replace and go to next cipher text character
                }
            else
                plaintext[i]=ciphertext[i];
        }
    }
    plaintext[i]='\0';//end the plain text string
    printf("Plain text is\n");
    puts(plaintext);//output ciphered text
    return 0;
}

