#include<map>
#include<iostream>
using namespace std;
#include<string>
#define endl "\n"
int main(){
    iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    map <string,string> A,B;
    int n,v;
    string origi,trad;
    cin >> n >> v;
    map<string,string> ::iterator it;
    for (int i = 0; i<n;i++){
        cin >> origi >> trad;
        A[origi] = trad;
        B[trad] = origi;
    }
    char op1,op2;
    int l;
    string pal;
    for(int j = 0; j<v;j++){
      cin >> op1 >> op2 >> l;
        for(int k = 0; k<l;k++){
          cin >> pal;
          if(op1!=op2){
            if(op1 == 'A'){
              it = A.find(pal);
              if(it!=A.end()){
                cout << A[pal] << " ";
              } else cout << pal << " ";
            }
            if(op1 == 'B'){
              it = B.find(pal);
              if(it!=B.end()){
                cout << B[pal] << " ";
              } else cout << pal << " ";
            }
         }
         else cout << pal << " ";
      }
      cout << endl;
    }
}
