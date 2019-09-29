#include <iostream>
#include <vector>
#include<algorithm>
#include<string>
#include<utility>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int>b){
    return a.second > b.second || (a.second==b.second && a.first < b.first); 
}
int main(){
    pair <int,int> p;
    vector <pair<int,int>> vet;
    int n,c,base=10,soma=0;
    cin >> n;
    for (int i =0; i<n;i++){
        cin >> c;
        p.first = c;
        while(c>0){
            soma+=c%base;
            c/=base;
        }
        p.second=soma;
        vet.push_back(p);
        soma = 0;
    }
    sort(vet.begin(),vet.end(),cmp);
    for(int z= 0; z<n;z++) cout << vet[z].first << " ";

}