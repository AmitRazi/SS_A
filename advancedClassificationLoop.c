

int *reverse_num(int n);
int isPalindrome(int n);
int isArmstrong(int n);
int *reverse_num(int n){
    int reversed = 0;
    int *temp = &reversed;
    while(n){
        reversed*=10;
        reversed+=(n % 10);
        n /= 10;
    }
    return temp;
}
int isPalindrome(int n){
    int *reversed_n = reverse_num(n);
    while(n && *reversed_n){
        if(n % 10 != (*reversed_n) % 10)
            return 0;
        n/=10;
        (*reversed_n)/=10;
    }
    if (!n && !(*reversed_n))
        return 1;
    return 0;
}
int isArmstrong(int n){
    int temp = n;
    int count = 0;
    while(temp){
        temp/=10;
        count++;
    }
    temp =n;
    int sum = 0;
    while(temp){
        int digit = temp % 10;
        for(int j = 0 ; j < count ; j++){
        digit*=temp%10;
        }
        sum+= digit;
        temp/=10;
    }
    return (n == sum);
}
