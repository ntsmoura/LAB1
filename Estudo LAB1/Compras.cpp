#include <iostream>
#include <vector>
#include<algorithm>
#include<string>
//#include<numeric>
using namespace std;
//#define endl "\n"
int main(){
    /*iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
    string a,b;
    cin >> a >> b;
    vector<char> vetor1,vetor2;
    for(int i = 0; a[i]!='\0';i++){
        vetor1.push_back(a[i]);
    }
    for(int t = 0; b[t]!='\0';t++){
        vetor2.push_back(b[t]);
    }
    sort(vetor1.begin(),vetor1.end());
    sort(vetor2.begin(),vetor2.end());
    bool result = true;
    if(vetor1.size()!=vetor2.size()) result = false;
    else{
        for(int j = 0; j<vetor1.size();j++){
            if(vetor1[j]!=vetor2[j]) result = false;
        }
    }
    if(result) cout << "Sim";
    else cout << "Nao";
}