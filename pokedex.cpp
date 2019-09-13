#include <iostream>
#include <set>
using namespace std;
int main(){
  int k, n;
  set <int> s;
  cin >> k;
  for (int i = 0; i<k; i++){
    cin >> n;
    s.insert(n);
  }
  int l;
  cin >> l;
  set<int>::iterator it;
  for (int z = 0; z<l;z++){
    int p;
    cin >> p;
    it = s.find(p);
    if (it != s.end()) cout << "Repetido" << endl;
    else{
      cout << "Temos que pegar!" << endl;
      s.insert(p);
    }
  }

}
