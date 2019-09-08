/*
            SUBSTITUTION CIPHER ENCRYPTION
Sample output
Enter the number of alphabets to be replaced
2
Enter the alphabets to be replaced without space
ha
Enter the replacement alphabets
lk

Enter the plain text
happy birthday
Cipher text is
lkppy birtldky

*/

#include<stdio.h>
int main()
{
    printf("********** SUBSTITUTION CIPHER ENCRYPTION **********\n");
    printf("Working flow of the program\nExample\n");
    printf("Enter the number of alphabets to be replaced\n2\n");
    printf("Enter the alphabets to be replaced without space\nab\n");
    printf("Enter the replacement alphabets\ncd\n");
    printf("\nEnter the plain text\nbat\n");
    printf("Cipher text is\ndct\n");
    printf("***************************************\n\n\n");

    //main program
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


    char plaintext[100],ciphertext[100];//strings to store plain text and cipher text
    //input plain text
    printf("\nEnter the plain text\n");
    gets(plaintext);

    int i,j;
    //loop to travel through plain text
    for(i=0;plaintext[i]!='\0';i++)
    {
        //loop to find presence of plain text character in the replacement table
        //if yes then replace it
        for(j=0;letter[j]!='\0';j++)
        {
            //find the occurance if found then replace else keep as it is
            if(plaintext[i]==letter[j])
                {
                    ciphertext[i]=replacewith[j];
                    break;//replace and go to next plain text character
                }
            else
                ciphertext[i]=plaintext[i];
        }
    }
    ciphertext[i]='\0';//end the cipher text string
    printf("Cipher text is\n");
    puts(ciphertext);//output ciphered text
    return 0;
}



