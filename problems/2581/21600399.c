#include<stdio.h>
#include<stdlib.h>

int _findNum(int num, int numref){
    if(num % numref == 0 ){
        return numref;
    }
    else {
        return _findNum(num, numref+1);
    }
}

void findNum(int a, int b){
    int min =b;
    int sum = 0; 
    for(int i=a; i<=b; i++){

        if(i == _findNum(i,2)){
            sum+=i;
            if(min>i){
                min = i;
            }
        }    
    }
    if(sum==0){
        printf("-1");
        return;
    }
    printf("%d\n %d",sum, min);
    return ;
}
int main(){
    int a=0, b=0;
    printf("input two nuber: ");
    scanf("%d %d",&a, &b);
    findNum(a,b);
    return 0;
}