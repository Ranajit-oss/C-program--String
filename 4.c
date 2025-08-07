/*Consonants*/
#include <stdio.h>
#include <string.h>
int main(){
    char arr[100],ch;
    int i,count=0;
    printf("Enter your name : ");
    fgets(arr,sizeof(arr),stdin);
    printf("Your name is : ");
    puts(arr);
    arr[strcspn(arr,"\n")]='\0';
    printf("The Consonants are : ");
    for(i=0;arr[i]!='\0';i++){
        ch = arr[i];
        if(((ch>=65 && ch<=90)||(ch>=97 && ch<=122))&&(ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&
            ch!='U'&&ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u')){
                printf("%c ",ch);
                count++;
        }
    }
    printf("\nTotal number of consonants are : %d",count);
}