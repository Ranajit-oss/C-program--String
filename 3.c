/*Vowels*/
#include <stdio.h>
#include <string.h>
int main(){
    char arr[100],ch;
    int count=0;
    printf("Enter the String : ");
    fgets(arr,sizeof(arr),stdin);
    printf("The String is : ");
    puts(arr);

    arr[strcspn(arr,"\n")]='\0';
    printf("\nThe Vowels are : ");
    for(int i=0;arr[i]!='\0';i++){
        ch = arr[i];
        if(ch=='A'||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U' || 
            ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ){
                printf("%c ",ch);
                count++;
        }
    }
    printf("\nTotal number of vowels : %d",count);
}