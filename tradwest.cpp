#include<map>
#include<iostream>
using namespace std;
#include<string>
int main(){
    map <string,string> m;
    int n;
    string origi,trad;
    cin >> n;
    map<string,string> ::iterator it;
    for (int i = 0; i<n;i++){
        cin >> origi >> trad;
        m[origi] = trad;
    }
    int k;
    string nov;
    cin >> k;
    for(int j = 0; j<k;j++){
      cin >> nov;
      it = m.find(nov);
      if(it!=m.end()){
        cout << m[nov] << " ";
      }
      else{
        cout << nov << " ";
      }
    }
}
