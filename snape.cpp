#include <iostream>
#include <set>
using namespace std;
int main(){
  int k, n;
  set <int> s;
  set<int> sobrou;
  cin >> k;
  for (int i = 0; i<k; i++){
    cin >> n;
    s.insert(n);
  }
  set<int>::iterator it;
  cin >> k;
  for (int z = 0; z<k;z++){
    int p;
    cin >> p;
    it = s.find(p);
    if (it != s.end()) {
      s.erase(it);
    }
    else{
      sobrou.insert(p);
    }
  }
  if(s.empty() && sobrou.empty()) cout << "Acertou tudo" <<endl;
  else{
    if(!sobrou.empty()){
    cout << "Sobrou:" << endl;
    for(it = sobrou.begin(); it!=sobrou.end();it++){
        cout << *it << " ";
      }
    }
    if(!s.empty()){
      cout << "\nFaltou:" << endl;
      for(it = s.begin(); it!=s.end();it++){
          cout << *it << " ";
        }
      cout << endl;
      }
    }
  }
