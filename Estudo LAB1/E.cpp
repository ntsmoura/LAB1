#include <iostream>
#include <vector>
#include<algorithm>
#include<string>
#include<utility>
using namespace std;
bool cmp(pair<string,string> a, pair<string,string> b){
    return a.first < b.first;
}
int main(){
    vector <pair<string,string>> dic;
    pair<string,string> p;
    int m;
    cin >> m;
    cin.ignore();
    for(int i = 0; i<m; i++){
        getline(cin,p.first);
        getline(cin,p.second);
        dic.push_back(p);
    }
    vector <pair<string,string>> ::iterator it;
    sort(dic.begin(),dic.end(),cmp);
    for(it = dic.begin();it<dic.end();it++){
        cout << (*it).second << endl;
    }
}