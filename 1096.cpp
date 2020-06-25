#include<bits/stdc++.h>

using namespace std;

int main(){
    int j = 1, b = 7;
    for(int i = 0; i < 5; i++){

        printf("I=%d J=%d\n",j,b);
        printf("I=%d J=%d\n",j,b-1);
        printf("I=%d J=%d\n",j,b-2);
        b += 2;
        j += 2;
    }

    return 0;
}

