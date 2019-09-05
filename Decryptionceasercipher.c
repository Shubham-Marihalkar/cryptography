#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j=0,key;
   char cypherText[100];
   char plainText[100];
   printf("Enter the cypher text\n");
   gets(cypherText);
   printf("Enter the key:");
   scanf("%d",&key);

   for(i=0; cypherText[i]!='\0'; i++){
    if(cypherText[i]>64&&cypherText[i]<=90){
        cypherText[i]=cypherText[i]-65-key;
        cypherText[i]=(cypherText[i]>=0)?((cypherText[i]%26)+65):((cypherText[i]+=26)+65);
        plainText[j]=cypherText[i];
        j++;
    }
    else if(cypherText[i]>96&&cypherText[i]<123){
        cypherText[i]=cypherText[i]-97-key;
        cypherText[i]=(cypherText[i]>=0)?((cypherText[i]%26)+97):((cypherText[i]+=26)+97);
        plainText[j]=cypherText[i];
        j++;
    }
   }
   plainText[j]='\0';
    printf("The plainText is: ");
    printf("%s",plainText);
}
