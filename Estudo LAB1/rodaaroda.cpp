#include <iostream>
#include<queue>
using namespace std;
//#define endl "\n"
int main(){
    /*iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
   int n,k,t;
   queue<int> roda;
   cin >> n;
   for(int i =0; i<n;i++){
       cin >> k;
       roda.push(k);
   }
   for(int j = 0; j<n-1;j++){
       cin >> t;
       for(int k = 0; k<t;k++){
           int f = roda.front();
           roda.pop();
           roda.push(f);
       }
       roda.pop();
   }
   cout << roda.front();
   
}