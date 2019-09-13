#include <iostream>
#include <set>
#include <utility>
using namespace std;
int main(){
  int k;
  cin >> k;
  pair <string,int> p;
  set < pair<string,int> > cartas;
  for(int i =0; i<k;i++){
      cin >> p.first >> p.second;
      cartas.insert(p);
  }
  set < pair<string,int> > ::iterator it;
  for(it = cartas.begin(); it!=cartas.end();it++){
      cout << (*it).first << " " << (*it).second << endl;
  }

}
