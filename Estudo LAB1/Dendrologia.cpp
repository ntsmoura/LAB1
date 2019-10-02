
#include <iostream>
#include <vector>
#include<algorithm>
#include<string>
//#include<numeric>
using namespace std;
#define endl "\n"
bool cmp(pair<string,int>a,pair<string,int>b){
    return(a.second > b.second);
}
int main(){
    iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    pair<string,int> p;
    int n,k;
    vector<pair<string,int>> vetor;
    cin >> n >> k;
    for (int i = 0; i<n; i++){
        cin >> p.first >> p.second;
        vetor.push_back(p);
    }
    sort(vetor.begin(),vetor.end(),cmp);
    for(int j = 0; j<k;j++) cout << vetor[j].first << endl;
}