#include <iostream>
#include <set>
#include <utility>
#include <vector>
#define endl "\n"
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  set <string>::iterator it;
  int k,n;
  cin >> k >> n;
  set <string> dic,dn,dp;
  string pl;
  for(int i = 0; i<k;i++){
    cin >> pl;
    dic.insert(pl);
  }
  int l;
  string f;
  for(int z = 0; z<n;z++){
      cin >> l;
      for(int p = 0; p<l;p++){
        cin >> f;
        it = dic.find(f);
        if (it!=dic.end()){
          if (p != l-1) cout << "bobba" << " ";
          else cout << "bobba";
          dp.insert(f);
        }
        else{
          dn.insert(f);
          if (p != l-1) cout << f << " ";
          else cout << f;
        }
      }
      cout << endl;
  }
  cout << dn.size() << " " << dp.size() << endl;
}

