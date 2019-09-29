#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> caixas;
    int n, m,k, soma=0,vl;
    cin >> n >> m;
    for (int i = 0; i<n;i++){
        cin >> k;
        caixas.push_back(k);
    }
    for(int z = 0; z<m;z++){
        cin >> vl;
        soma+= caixas[vl-1];
    }
    if(soma%3==0) cout << "jogador";
    else cout << "povoa";
}