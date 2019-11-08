#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
bool cmp(int a, int b){
  return a>b;
}
int main(){
  vector <int> vet;
  int n, k,valor,cont=0;
  cin >> n >> k;
  for(int i = 0; i<n;i++){
    cin >> valor;
    vet.push_back(valor);
  }
  vector<int>::iterator it,atual = vet.begin();
  for(int d = 0; d<k;d++){
    cin>>valor;
    it = lower_bound(vet.begin(),vet.end(),valor);
    cont += abs(it - atual);
    atual = it;
  }
  cout << cont;
}
