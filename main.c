#include <stdio.h>
#include "NumClass.h"
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The Armstrong numbers are:");
        for(int i = a ; i <=b ; i++){
        if(isArmstrong(i))
            printf(" %d",i);
    }
    printf("\n");
    printf("The Palindrome numbers are:");
    for(int i = a ; i <=b ; i++){
        if(isPalindrome(i))
            printf(" %d",i);
    }
    printf("\n");
    
    printf("The Prime numbers are:");
    printf("\n");
    for(int i = a ; i <=b ; i++){
        if(isPrime(i))
            printf(" %d",i);
    }
    printf("The Strong numbers are:");
    for(int i = a ; i <=b ; i++){
        if(isStrong(i))
            printf(" %d",i);
    }
    printf("\n");

    return 0;
}