#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n;i++){
        int x,y, som = 0;
        scanf("%d %d",&y,&x);
        if(y%2 == 0)
            y++;
        for(int j = 0; j < x;j++){
            som += y;

            y += 2;
        }
        printf("%d\n",som);

    }

    return 0;
}
