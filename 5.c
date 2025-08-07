/*Change the case of an input String 
RanajIT RAM  === rANAJit ram
*/
#include <stdio.h>
#include <string.h>
int main(){
    char arr[100],ch;
    printf("Enter the String : ");
    fgets(arr,sizeof(arr),stdin);
    printf("The String is : ");
    puts(arr);
    arr[strcspn(arr,"\n")]='\0';

    printf("\nAfter Changing case : ");
    for(int i=0;arr[i]!='\0';i++){
        ch =arr[i];
        if(ch>=65 && ch<=90){
            printf("%c",ch+32);
        }
        else if(ch>=97 && ch<=122){
            printf("%c",ch-32);
        }
    }
}
