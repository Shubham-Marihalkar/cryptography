#include<stdio.h>
main()
{
    int alphanum;

    //input number of alphabates to be replaced
    printf("Enter the number of alphabatesto be replaced\n");
    scanf("%d",&alphanum);

    //input the replacement table in form of two syrings
    char letter[alphanum],replacewith[alphanum];
    printf("Enter the alphabates to be replaced without space\n");
    getchar();
    gets(letter);
    printf("Enter the replacement alphabates\n");
    gets(replacewith);

    char plaintext[100],ciphertext[100];
    //input plain text
    printf("\nEnter the plain text\n");
    gets(plaintext);

    int i,j;
    for(i=0;plaintext[i]!='\0';i++)
    {
        for(j=0;j<alphanum;j++)
        {
            //find the occarance if found then replace else keep as it is
            if(plaintext[i]==letter[j])
                ciphertext[i]=replacewith[j];
            else
                ciphertext[i]=plaintext[i];
        }
    }
    ciphertext[i]='\0';
    printf("Cipher text is\n");
    puts(ciphertext);
}
