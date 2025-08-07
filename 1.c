#include <stdio.h>
#include <string.h>
int main(){
    char arr[100],ch;
    printf("Enter the 1st String : ");
    fgets(arr,sizeof(arr),stdin);
    printf("The String is : ");
    puts(arr);

    printf("Enter the 2nd String : ");
    scanf("%s",arr);
    printf("The String is %s",arr);

}