/*Reversed String */
#include <stdio.h>
#include <string.h>
int main(){
    int count=0;
    char arr[100],ch,rev[100];
    printf("Enter the string : ");
    fgets(arr,sizeof(arr),stdin);
    printf("The String is ");
    puts(arr);
    arr[strcspn(arr,"\n")]='\0';
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    /*
    for(int i=0;i<count;i++){
        rev[i]=arr[count-1-i];
    }
    printf("The Reversed String is : ");
    for(int i=0;i<count;i++){
        printf("%c",rev[i]);
    }
    */


   /*
    for(int i=0,j=count-1;i<j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<count;i++){
        printf("%c ",arr[i]);
    }
        */
    for(int i=count-1;i>=0;i--){
        printf("%c ",arr[i]);
    
    }
}