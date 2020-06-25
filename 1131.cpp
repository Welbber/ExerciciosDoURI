#include<bits/stdc++.h>

using namespace std;

int main(){
    int inter = 0, grem = 0, par = 1, empa = 0;
    while(true){
        int g, i,n;
        scanf("%d %d",&i,&g);
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&n);

        if(g == i)
            empa++;
        else if(i > g)
            inter++;

        else
            grem++;

        if(n == 2)
            break;
        par++;
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",par,inter,grem,empa);
    if(inter > grem)
        printf("Inter venceu mais\n");
    else if(inter < grem)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");
    return 0;
}
