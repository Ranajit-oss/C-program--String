/* Length of an string */
#include <stdio.h>
#include <string.h>
int main(){
    char arr[100],ch;
    int count=0;
    printf("Enter the string : ");
    fgets(arr,sizeof(arr),stdin);
    printf("The Array is : ");
    puts(arr);

    arr[strcspn(arr,"\n")]='\0';

    /*
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    */
   int Len=strlen(arr);

    printf("Length of the String : %d",Len);
}