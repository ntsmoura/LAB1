#include <iostream>
#include<stack>
using namespace std;
//#define endl "\n"
int main(){
    /*iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
   int n;
   char k;
   cin >> n;
   stack<char> p1;
   int soma = 0;
   for(int i = 0; i<n;i++){
       cin >> k;
       if(!p1.empty()){
           if(p1.top()==k){
               p1.pop();
               soma+=2;
           }
           else{
           p1.push(k);
            }
       }
       else{
           p1.push(k);
       }
   }
   cout << soma;
}