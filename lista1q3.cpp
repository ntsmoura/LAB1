#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> times;
    string ntime;
    for (int i = 0; i<=n;i++){
        getline(cin,ntime);
        times.push_back(ntime);
    }
     for (int k = 1; k<=(n/2);k++){
        cout << times[k] << " X " << times[n-k+1] << endl; 
    }
}