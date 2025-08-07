/*
Change the case of the input string to either uppercase or lower case as desired.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char arr[100],ch;
    int i,choice;
    printf("Enter the String : ");
    fgets(arr,sizeof(arr),stdin);
    printf("The String is : ");
    puts(arr);
    arr[strcspn(arr,"\n")]='\0'; 
    printf("Enter choice 1-LowerCase 2-Uppercase : ");
    scanf("%d",&choice);
    if(choice == 1){
        for(i=0;arr[i]!='\0';i++){
            ch = arr[i];
            printf("%c",tolower(ch));
        }
    }
    else{
        for(i=0;arr[i]!='\0';i++){
            ch = arr[i];
            printf("%c",toupper(ch));
        }
    }
}