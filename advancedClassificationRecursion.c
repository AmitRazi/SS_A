#include <math.h>
int count(int n);
int isArmstrong_helper(int n,int counter);
int isArmstrong(int n);
int count(int n);
int is_palindrome_rec_helper(int n, int rev);
int *recursive_reverse(int n, int *reversed);
int isPalindrome(int n);

int count(int n){
    if(n == 0)
        return 0;
    return 1+count(n/10);
}
int isArmstrong_helper(int n,int counter){
    if(n == 0)
        return 0;
    int digit = n %10;
    return pow(digit,counter)+ isArmstrong_helper(n/10,counter);
}
int isArmstrong(int n){
    int counter = count(n);
    return (isArmstrong_helper(n,counter) == n);
}
int *recursive_reverse(int n, int *reversed){
    if(n == 0)
        return reversed;
    *reversed = (*reversed)*10 + (n % 10);
    return recursive_reverse(n/10, reversed);
}
int is_palindrome_rec_helper(int n, int rev) {
    if((n == 0 && rev != 0) || (n != 0 && rev ==0))
        return 0;
    if(n == 0 && rev == 0)
        return 1;
    if(n%10 == rev%10)
        return is_palindrome_rec_helper(n/10,rev/10);
    return 0;
}
int isPalindrome(int n){
    int n_rev = 0;
    int *reversed = &n_rev;
    recursive_reverse(n,reversed);
    return is_palindrome_rec_helper(n, n_rev);
}
