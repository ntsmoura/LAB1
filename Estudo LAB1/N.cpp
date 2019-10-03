#include <iostream>
#include<set>
#include<string>
using namespace std;
//#define endl "\n"
int main(){
    /*iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
   int n,val;
   cin >> n;
   set<int> s;
   for(int i = 0; i<n;i++){
       cin >> val;
       s.insert(val);
   }
   cout << s.size();

}