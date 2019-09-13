#include <iostream>
#include <set>
#include <utility>
int main(){
  int i, n;
  set <int> S;
  for(i = 0; i<10;i++){
    cin >> n;
    S.insert(n);
  }
  set<int>::iterator it;
  for(it=S.begin();it!=S.end();it++){
    cout << *it;
  }
  it = S.find(3);
  if(it!=S.end()) S.erase(it).
  if(S.count(3)) S.erase(3);
  S.clear();

  //PAIR
  pair <int,int> p;
  p.first = 10;
  p.second = 20;

  //PAIR COM SET
  set <pair<int,int>> S;
  for(i = 0; i<10;i++){
    cin >> p.first >> p.second;
    S.insert(p);
  }

  //Operator (como pair funciona)
  bool operator<(pair<int,int> a, pai<int,int>b){
    return a.first < b.first || a.first == b.first && a.second < b.second;
  }
}
