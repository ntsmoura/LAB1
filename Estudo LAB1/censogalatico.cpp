#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
  map<string,int> pln;
  int n;
  string planeta,maior;
  cin >> n;
  for(int i = 0; i<n;i++){
    cin >> planeta;
    if(i == 0) maior = planeta;
    pln[planeta]+= 1;
    if(pln[planeta]>pln[maior]){
      maior = planeta;
    }
  }
  map<string,int> ::iterator it;
  /*for(it = pln.begin();it!=pln.end();it++){
    if(it->second > maior->second) maior = it;
  }*/
  it = pln.find(maior);
  cout << it->first << " " << it->second << endl;
  pln.erase(it);
  for(it = pln.begin();it!=pln.end();it++){
      cout << it->first << " " << it->second << endl;
  }
}
