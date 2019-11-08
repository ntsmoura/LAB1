#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
  vector <int> vet;
  int n, k,valor,cont=0;
  cin >> n >> k;
  for(int i = 0; i<n*k;i++){
    cin >> valor;
    vet.push_back(valor);
  }
  sort(vet.begin(),vet.end());
  vector<int>::iterator it;
  int j;
  cin >> j;
  for(int d = 0; d<j;d++){
    cin>>valor;
    it = upper_bound(vet.begin(),vet.end(),valor);
    cout << it - vet.begin() << endl;
  }
}
