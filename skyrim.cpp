#include<map>
#include<iostream>
using namespace std;
#include<string>
int main(){
    map <string,int> m;
    int n;
    string nome;
    int k;
    cin >> n;
    for (int i = 0; i<n;i++){
        cin >> nome >> k;
        m[nome]+= k;
    }
    map<string,int> ::iterator it;
    for(it = m.begin();it!=m.end();it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
}
