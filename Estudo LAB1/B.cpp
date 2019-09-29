#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool cmp(int a, int b){
    return(a%2!=0 && b%2!=0 && a<b) || (a%2!=0 && b%2==0) || (a%2==0 && b%2==0 && a>b);
}
int main(){
    vector <int> doces;
    int n,k;
    cin >> n;
    for (int i = 0; i<n;i++){
        cin >> k;
        doces.push_back(k);
    }
    sort(doces.begin(),doces.end(),cmp);
    vector <int> ::iterator it;
    for(it = doces.begin();it<doces.end();it++){
        cout << *(it) << " ";
    }
}