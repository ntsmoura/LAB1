#include <iostream>
#include <set>
#include <utility>
using namespace std;
int main(){
  int k, n;
  cin >> k >> n;
  set <int> filhos;
  pair <int,int> p;
  for(int i = 0; i<k;i++){
    int f;
    cin >> f;
    filhos.insert(f);
  }
  set<int>::iterator it;
  for(int z = 0; z<n; z++){
    cin >> p.first >> p.second;
    it = filhos.find(p.first);
    if(it!=filhos.end()) filhos.insert(p.second);
  }
  cout << filhos.size() << endl;
}
