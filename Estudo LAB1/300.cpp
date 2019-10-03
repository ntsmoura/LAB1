#include <iostream>
#include <vector>
#include<string>
//#include<numeric>
using namespace std;
//#define endl "\n"
int main(){
    /*iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
    int soma = 0;
    vector <char> letras;
    int n,k;
    char c;
    string s;
    cin >> n >> k >> c;
    for(int i = 0; i< n; i++){
        cin >> s;
        if(s[k] == c) letras.push_back(s[k]);
    }
    for(int j = 0; j<letras.size();j++){
        if(letras[j]==c) soma++;
    }
    if(soma==letras.size() && letras.size()!=0) cout << "Nova Ronda";
    else cout<< "Descansar";
    
   
}