#include <iostream>
#include<set>
#include<string>
using namespace std;
#define endl "\n"
int main(){
    iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   int n,op,val;
   int min,max,li=0,ls=0,foundm=0;
   set<int> s;
   set<int> ::iterator it,r;
   cin >> n;
   for(int i = 0; i<n;i++){
       cin >> op;
       if(op == 1){
           cin >> val;
           s.insert(val);
       }
       else if(op == 2){
           cin >> min >> max;
           foundm = 0;
           for(it = s.begin();it!=s.end();it++){
               if((*it)>=min && foundm==0) {
                   li = (*it);
                   foundm = 1;
               }
               if((*it)<=max) {
                   ls = (*it);
               }
           }
           cout << ls - li << endl;
       }
   }

}