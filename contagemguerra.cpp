#include<queue>
#include<iostream>
using namespace std;
int main(){
  int n, i, num,k;
  priority_queue<int> pq;
  cin>>n;
  for(i = 0;i<n;i++){
    cin>>k;
    for(int l = 0; l<k;l++){
      cin >> num;
      pq.push(num);
    }
    if(!pq.empty()){
      cout << pq.top() << endl;
      pq.pop();
    }
  }
}
