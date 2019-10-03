#include <iostream>
#include<set>
#include<string>
#include<algorithm>
using namespace std;
//#define endl "\n"
int main(){
    /*iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
   int n=1;
   set<string> s;
   while(true){
    cin >> n;
    if(n==0)break;
        for(int i = 0; i<n;i++){
            string a;
            cin >> a;
            sort(a.begin(),a.end());
            s.insert(a);
        }
    cout << s.size() << endl;
    s.clear();
   }
}