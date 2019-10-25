#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;
#define endl "\n"
bool cmp(pair<string,int>a,pair<string,int>b){
  return(a.second<b.second); //compara pelo segundo
}
int main(){
  iostream::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, i,k,j,f=0;
  cin >> n >> k;
  pair<string,int> p;
  priority_queue<pair<string,int>,vector<pair<string,int> >,bool(*)(pair<string,int>,pair<string,int>)> pq(cmp);
  //priority_queue<pair<string,int> > pq;
  for(i=0; i<n;i++){
    cin >> j;
    for(int l =0; l<j;l++){
      cin >> p.first >> p.second;
      pq.push(p);
    }
    for(int f = 0; f<k;f++){
      if(!pq.empty()){
        cout << pq.top().first << endl;
        pq.pop();
      }
    }
  }


}
