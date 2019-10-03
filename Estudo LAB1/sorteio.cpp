#include <iostream>
#include<queue>
using namespace std;
//#define endl "\n"
int main(){
    /*iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
   int n,k,t;
   queue <int> fila;
   cin >> n >> t;
   for(int i=1 ; i<=n;i++){
       cin >> k;
       if(k < 0){
           fila.push(i);
       }
   }
   int i = 1;
   while(true){
       int fim = i + t -1;
       if(fim > n) break;
       if(!fila.empty()) {
           int num = fila.front();
           if(num>=i && num<=fim){
            cout << num << endl;
            if(num == i) fila.pop();
        }
       } else cout << 0 << endl;
       i++;
   }
   
}
