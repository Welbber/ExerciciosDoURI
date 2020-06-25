#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n;i++){
        int x,y,a,soma = 0;
        scanf("%d %d",&x,&y);
        if(x > y){
            a = x;
            x = y;
            y = a;
        }

        for(int j = x+1; j < y;j++){
            if(j%2 != 0)
                soma += j;
        }
        printf("%d\n",soma);
    }
    return 0;
}
