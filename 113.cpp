#include<bits/stdc++.h>

using namespace std;

int main(){

    while(true){
        int x,y;
        scanf("%d %d",&x,&y);
        if(x == y)
            return 0;
        else if(x > y)
            printf("Decrescente\n");
        else
            printf("Crescente\n");
    }

    return 0;
}
