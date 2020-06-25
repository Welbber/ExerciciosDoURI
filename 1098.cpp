#include<bits/stdc++.h>

using namespace std;

int main(){
    double j = 0, b = 1;

    for(int i = 0; i < 11; i++){
        if(j == 0 || j == 1 || i == 10){
            printf("I=%0.lf J=%0.lf\n",j,b);
            printf("I=%0.lf J=%0.lf\n",j,b+1);
            printf("I=%0.lf J=%0.lf\n",j,b+2);
        }else{
            printf("I=%.1f J=%.1f\n",j,b);
            printf("I=%.1f J=%.1f\n",j,b+1);
            printf("I=%.1f J=%.1f\n",j,b+2);
        }
        b += 0.2;
        j += 0.2;
    }

    return 0;
}

