#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(int a, int b){
  return a>b;
}
int main(){
  vector <int> vet;
  int n, k,valor;
  cin >> n >> k;
  for(int i = 0; i<n;i++){
    cin >> valor;
    vet.push_back(valor);
  }
  vector<int>::iterator it;
  int l;
  cin>>l;
  for(int d =0; d<l;d++){
    cin>>valor;
    it = lower_bound(vet.begin(),vet.end(),valor);
    if(it-vet.begin()>=(n-k)) cout << "Sim";
    else cout << "Nao";
    cout << endl;
  }

}
