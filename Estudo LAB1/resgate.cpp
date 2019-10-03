#include <iostream>
#include<queue>
using namespace std;
//#define endl "\n"
int main(){
    /*iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
   int n,k,t;
   queue<int> fila;
   cin >> n >> t;
   for(int i =0; i<n;i++){
       cin >> k;
       fila.push(k);
   }
   int c = 0;
   for(int j = 0; j<t;j++){
       while(true){
           if(fila.front()<=c+1) {
               cout << fila.front() << endl;
               fila.pop();
               c++;
               break;
           }
           else{
               int num = fila.front();
               fila.pop();
               fila.push(num);
               c++;
           }
       }

   }
}