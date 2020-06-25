#include<bits/stdc++.h>

using namespace std;

int main(){

    double s,t = 0,a = true;

    scanf("%lf",&s);
    if(s > 2000){
        a = false;
        if(s > 3000){
            t += 1000*0.08;
            if(s > 4500){
                t += 1500*0.18;
                t += (s-4500)*0.28;
            }else{
               t += (s-3000)*0.18;
            }
        }else{
            t += (s-2000)*0.08;
        }
    }

    if(a)
        printf("Isento\n");
    else
        printf("R$ %.2lf\n",t);
    return 0;
}
