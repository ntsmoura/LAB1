#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
#define endl "\n"
int main(){
  iostream::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  map<string,int> mapa;
  int n,num;
  string op;
  cin >> n;
  for(int i = 0; i<n;i++){
    cin >> op >> num;
    mapa[op]+=num;
  }
  map<string,int> ::iterator it,maior = mapa.begin();
  for(it = mapa.begin();it!=mapa.end();it++){
    if(it->second > maior->second) maior = it;
  }
  cout << maior->first << " " << maior->second << endl;
  mapa.erase(maior);
  for(it = mapa.begin();it!=mapa.end();it++){
    cout << (*it).first << " " << (*it).second << endl;
  }

}
