#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector <int> vetor;
  int num,n;
  cin >> n;
  for(int i = 0; i <n;i++){
    cin >> num;
    vetor.push_back(num);
  }
  int caixa;
  cin >> caixa;
  sort(vetor.begin(),vetor.end());
  int ls,li,m,saida=-1;
  ls = n-1;
  li = 0;
  while(li <= ls){
      m = (ls+li)/2;
      if(vetor[m]==caixa){ saida=caixa; break;}
      else if(caixa > vetor[m]) li = m+1;
      else ls = m-1;
  }
  cout << saida << endl;
}
