#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
  map<int,int> colo;
  int n,k,num;
  string planeta,maior;
  cin >> n >> k;
  for(int i = 0; i < k; i++){
    cin >> num;
    colo[num]= i;
  }
  map<int,int> ::iterator it;
  for(int j = 0; j<n;j++){
      for(it = colo.begin();it!=colo.end();it++){
          if(it->second%n==j) cout << it->first << " ";
      }
      cout << endl;
  }
}
