#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);

    for(int i = 0; i < n;i++){
        vector<long long> primos;
        vector<long long> numeros;
        long long num;
        scanf("%lld",&num);
        long long cont = 2;
        while(true){
            if(num%cont == 0){
                primos.push_back(cont);
                if(num == cont)
                    break;
                num = num/cont;
            }else
                cont++;
        }
        for(int j = 0; j < primos.size();j++){
            for(int k = 0; primos.size();k++){
                if(j != k){

                }
            }
        }
    }

    return 0;
}
