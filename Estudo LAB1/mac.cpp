#include<queue>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define endl "\n"
int main(){
  iostream::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t,n,k,init,end,num;
  vector<int> vet;
  cin >> t;
  for(int i = 0; i<t;i++){
    cin >> n >> k;
    init = 1;
    end = k;
    vet.push_back(0);
    for(int j = 0;j<n;j++){
      cin >> num;
      vet.push_back(num);
    }
    while(end <=n){
      priority_queue<int,vector<int> > fila;
        for(int l = init; l<=end;l++){
          fila.push(vet[l]);
        }
        init++;
        end++;
        cout << fila.top() << " ";
      }
      cout << endl;
      vet.clear();

    }

}
