#include <bits/stdc++.h>

using namespace std;

int main(){
    int x = 1,y = 1;
    while(true){
        int a,soma = 0;
        scanf("%d %d",&x,&y);
        if(x <= 0 || y <= 0)
            return 0;
        if(x > y){
            a = x;
            x = y;
            y = a;
        }

        for(int j = x; j <= y;j++){
            printf("%d ",j);
            soma += j;
        }
        printf("Sum=%d\n",soma);
    }
    return 0;
}
