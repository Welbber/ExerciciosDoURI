#include<bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        int x, cont = 0;
        scanf("%d",&x);
        if(x == 0)
            break;
        if(x%2 != 0)
            x++;
        for(int i = x; i < x+10;i += 2){
            cont += i;
        }
        printf("%d\n",cont);

    }
    return 0;
}
