#include <iostream>
#include<set>
#include<string>
using namespace std;
//#define endl "\n"
int main(){
    /*iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
   int n,k,val;
   set<int> s,r;
   set<int>::iterator it,ir;
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> k;
        for(int j = 0; j<k;j++){
            cin >> val;
            ir = s.find(val);
            if(ir!=s.end()){
                it = r.find(val);
                if(it!=r.end()){
                    r.erase(it);
                }
            } else r.insert(val);
            s.insert(val);
        }
    }
    if (r.size()==0) cout << 0 << endl;
    else{
        for(it = r.begin();it!=r.end();it++) cout << (*it) << endl;
    }

}