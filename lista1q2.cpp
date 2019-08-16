#include<iostream>
#include<vector>
using namespace std;
int main(){
int n,num,qtd=0;
vector <int> u,v,d;
cin >> n;
for(int k = 0; k<3;k++){
  for (int i = 0; i<n;i++){
      cin >> num;
      switch(k){
        case 0: u.push_back(num);
        break;
        case 1: v.push_back(num);
        break;
        case 2: d.push_back(num);
        break;
      }
    }
}
for(int k =0; k<n;k++){
  if(u[k]+v[k]==d[k]) qtd++;
  else break;
}
if(qtd == n) cout << "OK" << endl;
else cout << "NOPE :(" << endl;
}
