#include<bits/stdc++.h>

using namespace std;

int main(){

    int x,y,cont = 1;
    scanf("%d %d",&x, &y);

    for(int i = 0; i < y/x;i++){
        for(int j = 0; j < x;j++){
            if(j == x-1)
                printf("%d\n",cont);
            else
                printf("%d ",cont);
            cont++;
        }
    }

    return 0;
}
