#include <iostream>
#include<set>
using namespace std;
//#define endl "\n"
int main(){
    /*iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
   int n,k;
   set<int> s;
   cin>>n;
   for(int i = 0; i<n;i++) {
       cin >> k;
       s.insert(k);
   }
   set<int>::iterator it;
   for(it = s.begin();it!=s.end();it++) cout << (*it) << endl;

}
