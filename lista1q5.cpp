#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,nmilho;
    cin >> n;
    vector <int> milhos;
    for(int i = 0; i<n;i++){
        cin >> nmilho;
        milhos.push_back(nmilho);
    }
    sort(milhos.begin(),milhos.end());
    cout << milhos[n/2] << endl;
  
}