#include<bits/stdc++.h>

using namespace std;

int main(){
    int m = -1 ,p;
    for(int i = 0; i < 5;i++){
        int n;
        scanf("%d",&n);
        if(n > m){
            m = n;
            p = i;
        }
    }
    printf("%d\n%d\n",m,p+1);
    return 0;
}
