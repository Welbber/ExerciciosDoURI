#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,z,cont = 0;
    scanf("%d",&x);
    while(true){
        scanf("%d",&z);
        if(z > x)
            break;
    }
    int y = x;
    while(true){
        if(x > z){
            cont++;
            break;
        }else{
            cont++;
            y++;
            x += y;
        }
    }
    printf("%d\n",cont);
    return 0;
}
