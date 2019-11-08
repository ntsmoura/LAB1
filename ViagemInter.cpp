#include<iostream>
#include<vector>
#include<algorithm>
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
  for(int d = 0; d<k;d++){
    cin>>valor;
    if(binary_search(vet.begin(),vet.end(),valor)) cont++;
  }
  cout << cont;
}
