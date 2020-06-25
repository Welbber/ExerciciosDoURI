#include<bits/stdc++.h>

using namespace std;

int main(){
    double n ,total = 0, tc = 0, tr = 0, ts = 0;

    scanf("%lf",&n);

    for(int i = 0;i < n; i++){
        char a;
        double b;
        scanf("%lf",&b);
        cin >> a;
        total += b;
        if(a == 'C')
            tc += b;
        else if(a == 'R')
            tr += b;
        else
            ts += b;
    }
    printf("Total: %.0lf cobaias\n",total);
    printf("Total de coelhos: %.0lf\n",tc);
    printf("Total de ratos: %.0lf\n",tr);
    printf("Total de sapos: %.0lf\n",ts);
    printf("Percentual de coelhos: %.2lf %%\n",(tc*100)/total);
    printf("Percentual de ratos: %.2lf %%\n",(tr*100)/total);
    printf("Percentual de sapos: %.2lf  %%\n",(ts*100)/total);
    return 0;
}
