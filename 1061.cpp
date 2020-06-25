#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin >> a;

    int dini,hini,mini,sini;
    int dfim, hfim, mfim, sfim;
    scanf("%d %d",&dini,&hini);
    cin >> a;
    scanf("%d",&mini);
    cin >> a;

    scanf("%d",&sini);
    cin >> a;
    scanf("%d %d",&dfim, &hfim);
    cin >> a;
    scanf("%d",&mfim);
    cin >> a;
    scanf("%d",&sfim);

    int minini = dini*86400;
    minini += hini*3600;
    minini += mini*60;
    minini += sini;

    int minfim = dfim*86400;
    minfim += hfim*3600;
    minfim += mfim*60;
    minfim += sfim;

    int n = minfim-minini;
    int dtotal = 0, htotal = 0, mtotal = 0, stotal = 0;

    if(n/86400 > 0){
        dtotal = n/86400;
    }
    if(n/3600 > 0){
        htotal = (n/3600)-(dtotal*24);
    }
    if(n/60 > 0){
        mtotal = (n/60)-((dtotal*1440)+(htotal*60));
    }

    if(n/60 > 0){
        stotal = n-((dtotal*86400)+(htotal*3600)+(mtotal*60));
    }
    printf("%d dia(s)\n%d hora(s)\n",dtotal,htotal);
    printf("%d minuto(s)\n%d segundo(s)\n",mtotal,stotal);
    return 0;
}
