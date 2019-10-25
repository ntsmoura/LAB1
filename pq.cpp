#include<queue>
#include<iostream>
using namespace std;
int main(){
  int n, i, num;
  priority_queue<int> pq;
  //priority_queue<int,vector<int>,greater<int>> pq; para prioridade no menor número (heap max) ou less<int> para heap min
  cin>>n;
  for(i = 0;i<n;i++){
    cin>>num;
    pq.push(num);
  }
  while(!pq.empty()){
    cout << pq.top() << endl;
    pq.pop();
  }
}
