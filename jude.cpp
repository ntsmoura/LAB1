#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;
#define endl "\n"
int main(){
  iostream::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, i, num,k,j,f=0;
  priority_queue<int,vector<int>,greater<int> > pq;
  cin>>n >> k;
  for(i = 0;i<n;i++){
    cin>>j;
    for(int l = 0; l<j;l++){
      cin >> num;
      pq.push(num);
    }
    while(!pq.empty() && f<k){
      cout << pq.top() << " ";
      pq.pop();
      f++;
    }
    f=0;
  }
}
