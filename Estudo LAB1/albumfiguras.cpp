#include <iostream>
#include<set>
using namespace std;
//#define endl "\n"
int main(){
    /*iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
   int p=1,c=1,n1,n2;
   set<int> pa,ca,r;
   set<int>::iterator it,k,x;
   while(true){
       cin >> p >> c;
       if(p==0 && c==0) break;
       for(int i = 0; i<p;i++) {
           cin >> n1;
           pa.insert(n1);
       }
       for(int j = 0; j<c;j++){
           cin >> n2;
           ca.insert(n2);
       }
       for(it = pa.begin();it!=pa.end();it++){
           k = ca.find(*it);
           if(k!=ca.end()) {
               ca.erase(k);
               x = it;
           }
       }
       //for(it= r.begin();it!=r.end();it++) pa.erase(pa.find(*it));
       if(ca.size()>pa.size()) cout << pa.size() << endl;
       else if(ca.size()<pa.size()) cout << ca.size() << endl;
       else cout << ca.size() << endl;
       pa.clear();
       ca.clear();
       //r.clear();
   }
}
