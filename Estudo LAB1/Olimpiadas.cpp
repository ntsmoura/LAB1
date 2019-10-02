#include <iostream>
#include <vector>
#include<algorithm>
//#include<numeric>
using namespace std;
//#define endl "\n"
bool cmp(pair<int,int>a,pair<int,int>b){
    return(a.second > b.second);
}
int main(){
    iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    pair<int,int> p;
    int soma = 0;
    int n,k,v;
    vector<pair<int,int>> vetor;
    cin >> n >> k;
    p.first = 0; p.second = 0;
    vetor.push_back(p);
    for(int l = 0; l<n;l++){
        p.first = l+1;
        p.second = 0;
        vetor.push_back(p);
    }
    for(int i = 0; i< k;i++){
        for(int j = 0; j<3;j++){
            cin >> v;
            vetor[v].second++;
        }
    }
    sort(vetor.begin(),vetor.end(),cmp);
    for(int m = 0; m<n;m++){
        cout << vetor[m].first << " ";
    }
}