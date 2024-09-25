#include<stdio.h>
int main(){

    int age;
    printf("Enter  the age of person: ");
    scanf("%d", &age);
    if(age >= 18 ){
        printf("Valid for voting !");
    }
    else{
        printf("Valid not for voting !");
    }
    return 0;
}