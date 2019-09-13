#include <iostream>
#include <set>
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
  if(it!=S.end) S.erase(it).
  if(S.count(3)) S.erase(3);
  S.clear();
}
