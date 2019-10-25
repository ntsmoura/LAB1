#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;
#define endl "\n"
bool cmp(pair<string,int>a,pair<string,int>b){
  return(a.second>b.second); //compara pelo segundo
}
int main(){
  iostream::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int num;
  int n, i,g,s,mission;
  cin >> n;
  priority_queue<int> grif;
  priority_queue<int,vector<int>,greater<int> > son;
  for(int i = 0; i<n;i++){
    cin >> g >> s;
    for(int j = 0;j<g;j++){
      cin >> num;
      grif.push(num);
    }
    for(int r = 0; r<s;r++){
      cin >> num;
      son.push(num);
    }
    cin >> mission;
    if(!grif.empty() && !son.empty()){
        for(int h = 0; h<mission;h++){
          if(son.empty() || grif.empty()) break;
          cout << grif.top() << " " << son.top() << endl;
          grif.pop();
          son.pop();
        }
    }
  }


}
