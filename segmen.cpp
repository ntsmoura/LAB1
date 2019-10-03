#include <iostream>
#include <set>
#include <utility>
#define endl "\n"
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  set <long long int> carros;
  int n;
  long long int first,second,seg=0;
  char k;
  set < long long int> ::iterator f,s,ant,prox,final=carros.end();
  cin >> n;
  for(int i =0; i<n;i++){
      cin >> k >> first >> second;
      if (k == 'E'){
          carros.insert(first);
          carros.insert(second);
          ant = carros.find(first-1);
          prox = carros.find(second+1);
          if(ant!=final && prox!=final) seg--;
          else if(ant==final && prox == final) seg++;
      }
      else {
          f = carros.find(first);
          s = carros.find(second);
          ant = carros.find(first-1);
          prox = carros.find(second+1);
          if(ant!=final && prox!=final) seg++;
          else if(ant==final && prox == final) seg--;
          carros.erase(f);
          carros.erase(s);

      }
      cout << seg << endl;
  }
}

