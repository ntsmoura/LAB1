#include <iostream>
#include <vector>
#include<algorithm>
#include<string>
#include<utility>
using namespace std;
bool cmp(pair<string,int> a, pair<string,int> b){
    return a.second > b.second || (a.second == b.second && a.first < b.first);
}
int main(){
    vector <pair<string,int>> dic;
    pair<string,int> p;
    int m;
    cin >> m;
    for(int i = 0; i<m; i++){
        cin >> p.first >> p.second;
        dic.push_back(p);
    }
    vector <pair<string,int>> ::iterator it;
    sort(dic.begin(),dic.end(),cmp);
    for(it = dic.begin();it<dic.end();it++){
        cout << (*it).first << endl;
    }
}