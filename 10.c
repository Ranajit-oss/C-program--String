/* WAP to convert first character of each word to uppercase */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char arr[100],ch;
    printf("Enter the string : ");
    fgets(arr,sizeof(arr),stdin);
    printf("The String is : ");
    puts(arr);
    arr[strcspn(arr,"\n")]='\0';
    printf("%c ",toupper(arr[0]));
    for(int i=0;arr[i]!='\0';i++){
        ch =arr[i];
        if(ch==32){
            printf("%c ",toupper(arr[i+1]));
        }
    }
}