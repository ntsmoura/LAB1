#include <iostream>
#include <vector>
//#include<numeric>
using namespace std;
//#define endl "\n"
int main(){
    /*iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
    vector <int> lucros;
    int n, m,k, soma=0,a,b;
    cin >> n >> m;
    lucros.push_back(0);
    for (int i = 1; i<=n;i++){
        cin >> k;
        lucros.push_back(k+lucros[i-1]);
    }
    for(int z = 0; z<m;z++){
        cin >> a >> b;
        /*for(int d = a-1;d<=b-1;d++){
            soma+= lucros[d];
        }
        soma = accumulate(lucros.begin()+(a-1),lucros.begin()+b,0);*/
        soma = lucros[b]-lucros[a-1];
        cout << soma << endl;
        soma=0;
    }
}