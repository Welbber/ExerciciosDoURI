#include <bits/stdc++.h>

using namespace std;

int main(){

    int x,y,in,fi,t= 0;
    scanf("%d %d",&x,&y);
    if( x > y){
        in = y;
        fi = x;
    }else{
        in = x;
        fi = y;
    }
    for(int i = in+1; i < fi; i++){
        if(i%2 !=0)
            t += i;
    }
    printf("%d\n",t);
    return 0;
}
