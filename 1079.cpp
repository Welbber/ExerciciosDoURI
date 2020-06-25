#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
     double a,b,c,m;
    for(int i = 0; i < n;i++){

        scanf("%lf %lf %lf",&a,&b,&c);
        m = a*0.2;
        m += b*0.3;
        m += c*0.5;
        printf("%.1lf\n",m);
    }
    return 0;
}
