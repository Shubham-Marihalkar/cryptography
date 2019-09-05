#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j=0,key=2;
   char plainText[100];
   char cypherText[100];
   printf("Enter the plain text\n");
   gets(plainText);
   for(i=0; plainText[i]!='\0'; i++){
    if(plainText[i]>64&&plainText[i]<=90){
        cypherText[j]=((plainText[i]-64+key)%26)+64;
        j++;
    }
    else if(plainText[i]>96&&plainText[i]<=123){
        cypherText[j]=((plainText[i]-96+key)%26)+96;
        j++;
    }
   }
   cypherText[j]='\0';
    printf("The cypherText is: ");
    printf("%s",cypherText);
}
