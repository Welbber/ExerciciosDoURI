#include<bits/stdc++.h>

using namespace std;

int fibonacciRecur(int n){
    if(n == 1 || n == 0)
        return 1;
    else{
        return fibonacciRecur(n-1)+ fibonacciRecur(n-2);
    }
}


int main(){
    int n;
    scanf("%d",&n);
    printf("0 ");
    for(int i = 0; i < n-1;i++)
        if(i == n-1)
            printf("aa%d\n",fibonacciRecur(i));
        else
            printf("%d ",fibonacciRecur(i));
    return 0;
}
