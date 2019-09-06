//
//  main.c
//  [problem] 소수 #6
//
//  Created by 정명훈 on 26/03/2019.
//  Copyright © 2019 정명훈. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int arr[2];     //입력받은 두 수를 저장하는 배열 선언
    printf("# 예제 입력\n");
    scanf("%d\n%d", &arr[0], &arr[1]);
    
    for(;;)
    {
        if (arr[0]<=0 || arr[1]<=0 || arr[0]>10000 || arr[1]>10000 || arr[0]>arr[1])
        {
            printf("# 예제 다시 입력\n");        //입력한 수가 조건에 어긋나면 재입력을 요구
            scanf("%d\n%d", &arr[0], &arr[1]);
        }
        if (arr[0]>=0 && arr[1]>=0 && arr[0]<=10000 && arr[1]<=10000 && arr[0]<=arr[1])
        {
            break;     //입력한 두 수가 모두 조건에 부합하면 무한루프 탈출
        }
    }
    
    int 소수저장하는배열[arr[1]-arr[0]];
    int 소수존재여부판별=0;     //구간에 소수가 존재하지 않을 경우 -1을 출력하기 위한 장치
    
    for (int i=0; i<arr[1]-arr[0]+2; i++)
    {
        소수저장하는배열[i]=0;      //소수저장하는배열의 모든 요소에 일단 0을 채워넣음
    }
    
    for (int i=arr[0]; i<=arr[1]; i++)
    {
        int 소수판별변수=0;       //i가 소수인지 여부를 판별하기 위한 장치

        for (int j=1; j<=i; j++)
        {
            if (i==1 || i%j==0)
            {
                소수판별변수++;       //i%j가 0이 되게하는 j값이 발견되는 순간(i가 소수가 아닐 때) 1증가
            }
            if(j==i && 소수판별변수==2)
            {
                소수저장하는배열[i-arr[0]]=i;
                소수존재여부판별++;     //소수가 존재할 시, 1증가
            }
        }
    }
    
        
    int sum=0;
    for (int i=0; i<arr[1]-arr[0]+2; i++)
    {
        if (소수저장하는배열[i]!=0)
        {
            sum+=소수저장하는배열[i];       //배열에 저장된 소수를 모두 더하여 sum에 저장
        }
    }
    
    printf("\n");
    printf("# 예제 출력\n");
    if (소수존재여부판별!=0)        //구간에 소수가 존재할 시, sum에 저장된 수를 출력
    {
        printf("%d\n", sum);
    }
    else
    {
        printf("%d\n", -1);     //구간에 소수가 존재하지 않을 경우 -1 출력
    }
    return 0;
}
