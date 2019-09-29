#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool cmp(string a, string b){
    return(a>b);
}
int main(){
    vector <string> dic;
    string k;
    while (cin >> k){
        dic.push_back(k);
    }
    vector <string> ::iterator it;
    sort(dic.begin(),dic.end(),cmp);
    for(it = dic.begin();it<dic.end();it++){
        cout << *(it) << endl;
    }
}