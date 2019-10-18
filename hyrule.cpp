#include<map>
#include<iostream>
using namespace std;
#include<string>
int main(){
    map <string,string> m;
    int n;
    string origi,trad;
    cin >> n;
    map<string,int> ::iterator it;
    for (int i = 0; i<n;i++){
        cin >> origi >> trad;
        cin.ignore();
        getline(cin,nome);
        it = m.find(nome);
        if(it!=m.end()){
          if(k < (*it).second) continue;
        }
        m[nome]= k;
    }
    for(it = m.begin();it!=m.end();it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
}
