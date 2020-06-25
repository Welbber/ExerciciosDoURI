#include<bits/stdc++.h>

using namespace std;

int main(){
    double a,b,c;
    vector<double> v;

    scanf("%lf %lf %lf",&a,&b,&c);

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(), v.end());
    if(v[2] >= v[1]+v[0]){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if(pow(v[2],2) == pow(v[1],2)+pow(v[0],2))
            printf("TRIANGULO RETANGULO\n");

        else if(pow(v[2],2) > pow(v[1],2)+pow(v[0],2))
            printf("TRIANGULO OBTUSANGULO\n");

        else if(pow(v[2],2) < pow(v[1],2)+pow(v[0],2))
            printf("TRIANGULO ACUTANGULO\n");

        if(v[2] == v[1] && v[1] == v[0])
            printf("TRIANGULO EQUILATERO\n");
        else if(v[2] == v[1] || v[2] == v[0] || v[1] == v[0])
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
