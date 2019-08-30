#include <iostream>
#include <stack>
using namespace std;
int main(){
  int n,k;
  stack<int>pilha;
  cin >> n;
  int vetor[n]={};
  for(int i =0; i<n;i++){
    cin >> vetor[i];
  }
  for(int l = 0; l<n;l++){
    if(vetor[l]>0){
      pilha.push(vetor[l]);
    }
    else if(vetor[l]==-1){
      if(!pilha.empty()) pilha.pop();
    }
  }
  int soma =0;
  while(!pilha.empty()){
    soma+=pilha.top();
    pilha.pop();
  }
  cout << soma;
}
