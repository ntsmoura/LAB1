#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,nestatua;
    cin >> n;
    vector <int> estatuas;
    for(int i = 0; i<n;i++){
        cin >> nestatua;
        estatuas.push_back(nestatua);
    }
    int somatorio=0;
    sort(estatuas.begin(),estatuas.end());
    for(int k =0; k<(n-1);k++){
        int sub = estatuas[k+1]-estatuas[k];
        somatorio+= sub-1;
    }
    cout << somatorio << endl;
  
}