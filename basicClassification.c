int *factorial(int n);
int isStrong(int n);
int isPrime(int n);

int *factorial(int n){
    int res = 1;
    int *p = &res;
    while (n>1){
        res*=n--;
    }
    return p;
}
int isStrong(int n){
    int temp = n;
    int res = 0;
    while(temp){
        res+=*factorial(temp %10);
        temp/=10;
    }
    return (res == n);
}
int isPrime(int n){
    if(n < 1)
        return 0;
    if(n == 1)
        return 1;
    int i;
    for(i = 2 ; i < n ; i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}
