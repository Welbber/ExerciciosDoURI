#include<bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        int n;
        scanf("%d",&n);
        if(n == 0)
            break;
        for(int i = 1; i <= n; i++){
            if(i == n)
                printf("%d\n",i);
            else
                printf("%d ",i);
        }
    }

    return 0;
}
