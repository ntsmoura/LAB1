#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
  pair<string,int> p,vl;
  vector<pair<string,int> > vet;
  int k,cont=0;
  cin >> k;
  for(int i = 0; i<k;i++){
    cin >> p.first >> p.second;
    vet.push_back(p);
  }
  int n;
  cin >> n;
  vector<pair<string,int> >::iterator it;
  for(int d = 0; d<n;d++){
    cin >> vl.first;
    it = lower_bound(vet.begin(),vet.end(),vl);
    if((*it).first == vl.first) cont += (*it).second;
  }
  cout << cont;
}
