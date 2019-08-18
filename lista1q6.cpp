#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct lutador lutador;
struct lutador{
    string nome;
    int poder;
};
bool cmp(lutador a, lutador b){
    return (a.poder < b.poder);
}
int main(){
    int n,v;
    lutador lut;
    vector <lutador> lutadores;
    cin >> n >> v;
    for (int i =0;i<n;i++){
        cin >> lut.nome >> lut.poder;
        lutadores.push_back(lut);
    }
    sort(lutadores.rbegin(),lutadores.rend(),cmp);
    for(int k = 0; k<v;k++)
     cout << lutadores[k].nome << " " << lutadores[k].poder << endl;
}