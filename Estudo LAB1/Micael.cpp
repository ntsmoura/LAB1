#include <iostream>
#include <vector>
//#include<numeric>
using namespace std;
//#define endl "\n"
int main(){
    /*iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
    int soma = 0;
    int n,k;
    cin >> n;
    vector<int> vetor;
    for(int i = 0; i< n;i++){
        cin >> k;
        vetor.push_back(k);
        soma+=k;
    }
    int media = soma/n;
    for(int j = 0; j<n;j++){
        cout << vetor[j];
        if(vetor[j]>=media) cout << ": Sim!" << endl;
        else cout << ": Nao!" << endl;
    }
   
}