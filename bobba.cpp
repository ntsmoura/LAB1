#include <iostream>
#include <set>
#include <utility>
#include <vector>
using namespace std;
int main(){
  set <string>::iterator it;
  int k,n,tt1=0,tt2=0;
  cin >> k >> n;
  set <string> dic,digitadas;
  for(int i = 0; i<k;i++){
    string pl;
    cin >> pl;
    dic.insert(pl);
  }
  for(int z = 0; z<n;z++){
      int l;
      cin >> l;
      for(int p = 0; p<l;p++){
        string f;
        cin >> f;
        it = dic.find(f);
        if (it!=dic.end()){
          if (p != l-1) cout << "bobba" << " ";
          else cout << "bobba";
          if(digitadas.find(f)==digitadas.end()) tt2++;
        }
        else{
          if(digitadas.find(f)==digitadas.end()) tt1++;
          if (p != l-1) cout << f << " ";
          else cout << f;
        }
        digitadas.insert(f);
      }
      cout << endl;
  }
  cout << tt1 << " " << tt2 << endl;
}
