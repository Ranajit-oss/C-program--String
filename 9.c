/*Wap to count the number of words */
#include <stdio.h>
#include <string.h>
int main(){
    char arr[100],ch;
    int i,count=1;
    printf("Enter the array : ");
    fgets(arr,sizeof(arr),stdin);
    printf("Your name is : ");
    puts(arr);
    arr[strcspn(arr,"\n")]='\0';
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]==32){
            count++;
        }
    }
    printf("Total number of words : %d",count);
}
