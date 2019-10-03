#include <iostream>
#include<stack>
using namespace std;
//#define endl "\n"
int main(){
    /*iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
   int i,j;
   stack <int> p1,p2;
   for(int f = 0; f<12;f++) {
       cin >> i >> j;
       if(i>0) p1.push(i);
       else if(i<0 && !p2.empty()){
           for(int k = 0; k<(i*-1) && !p2.empty();k++){
               p2.pop();
           }
       }
       if(j>0) p2.push(j);
       else if(j<0 && !p1.empty()){
           for(int k = 0; k<(j*-1) && !p1.empty();k++){
               p1.pop();
           }
       }
   }
   int s1=0,s2=0;
   while(!p1.empty()){
       s1+=p1.top();
       p1.pop();
   }
   while(!p2.empty()){
       s2+=p2.top();
       p2.pop();
   }
   if(s1>s2) cout << "Joaozinho " << s1;
   else if(s1<s2) cout << "Pedrinho " << s2;
   else cout << "Empate";

}
