#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int,char> a, pair<int,char> b){
  return a.first<b.first;
}
int main(){
  pair<int,char> p,vl;
  vector<pair<int,char> > vet;
  int k;
  cin >> k;
  for(int i = 0; i<k;i++){
    cin >> p.first >> p.second;
    vet.push_back(p);
  }
  int valor,n;
  cin >> n;
  vector<pair<int,char> >::iterator it;
  for(int d = 0; d<n;d++){
    cin >> vl.first;
    it = lower_bound(vet.begin(),vet.end(),vl,cmp);
    if((*it).first == vl.first) cout << (*it).second << endl;
    else cout << "Ausente" << endl;
  }
}
