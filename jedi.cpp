#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;
#define endl "\n"
bool cmp(pair<string,int>a,pair<string,int>b){
  return(a.second>b.second || (a.second==b.second && a.first>b.first)); //compara pelo segundo
}
int main(){
  iostream::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, i,k,j,f=0;
  cin >> n;
  pair<string,int> p;
  priority_queue<pair<string,int>,vector<pair<string,int> >,bool(*)(pair<string,int>,pair<string,int>)> pq(cmp);
  //priority_queue<pair<string,int> > pq;
  for(i=0; i<n;i++){
    cin >> p.first >> p.second;
    pq.push(p);
  }
  int num;
  queue <int> fila;
  cin >> k;
  for(int l=0;l<k;l++){
    cin>>num;
    fila.push(num);
  }
  while(!fila.empty()){
    p = pq.top();
    p.second += fila.front();
    fila.pop();
    pq.pop();
    pq.push(p);
  }
while(!pq.empty()){
  cout << pq.top().first << " " << pq.top().second << endl;
  pq.pop();
}


}
