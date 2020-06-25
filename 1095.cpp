#include<bits/stdc++.h>

using namespace std;

int main(){
    int j = 1;
    for(int i = 60; i >= 0; i -= 5){
        printf("I=%d J=%d\n",j,i);
        j += 3;
    }

    return 0;
}
