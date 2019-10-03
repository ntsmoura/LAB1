#include <iostream>
#include<queue>
#include<string>
using namespace std;
#define endl "\n"
int main(){
    iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   int n,val,op;
   pair<string,int> p;
   queue<pair<string,int>> fila;
   cin >> n;
   for(int i = 0; i<n;i++){
       cin >> op;
       if(op == 0){
           cin.ignore();
           getline(cin,p.first);
           cin >> p.second;
           fila.push(p);
       }
       else{
           cin >> val;
           if(fila.empty()) cout << "Nao existem bugs cadastrados" << endl;
           else{
               p = fila.front();
               fila.pop();
               int sum = p.second - val;
               if(sum > 0){
                   p.second = sum;
                   fila.push(p);
               }
           }
       }
   }
   if(fila.empty()) cout << "Fila vazia";
   else{
    while(!fila.empty()){
        cout << fila.front().first << " " << fila.front().second << endl;
        fila.pop();
    }
   }

}