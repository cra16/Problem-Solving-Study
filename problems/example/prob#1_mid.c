// prob - sol #1.mid
// Jang Ju Man
// 19.3.24

#include<stdio.h>
#include<stdlib.h>

int min=-1;

// check prime num
int IsPrime(int i, int *First){
    int PrimeCheck=0;

    for(int j=2; j<=i/2; j++){
        // this is not prime num.
        if(i%j == 0){
            PrimeCheck = -1;
            break;
        }
    }

    // this is prime
    if(PrimeCheck == 0){
        if(*First == 0){
            min = i;
            *First = 1;
        }
        return 1;
    }
    // not prime
    else{
        return 0;
    }
}


// main function
int main(){
    int N=-1, M=-1;
    int sum=0;
    int isMin = 0;

    // input number N <= x <= M
    printf("# please input N (x >= N) : ");
    scanf("%d",&N);
    printf("# please input M (x <= M) : ");
    scanf("%d",&M);

    // Prime number test
    for(int i=N; i<=M; i++){
        if(IsPrime(i, &isMin)){
            sum += i;
        }
    }
    if(sum == 0 ){
        printf("-1\n");
    }
    else{
        printf("sum : %d\n", sum);
        printf("min : %d\n", min);
    }
    

    return 0;
}


