#include<bits/stdc++.h>

using namespace std;

int main(){
    double s = 1;
    long long n = 2;

    for(double i = 3;i <= 39; i+= 2){
        s += i/n;
        n = n+n;
    }
    printf("%.2f\n",s);
    return 0;
}
