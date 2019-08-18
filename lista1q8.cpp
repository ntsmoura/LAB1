#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct pack pack;
struct pack{
    string nome;
    int energia;
};
bool cmp(pack a, pack b){
    return (a.nome < b.nome || (a.nome == b.nome && a.energia > b.energia));
}
int main(){
    pack pacote;
    vector <pack> pacotes;
    int n;
    cin >> n;
    for(int i =0; i<n;i++){
        cin >> pacote.nome >> pacote.energia;
        pacotes.push_back(pacote);
    }
    sort(pacotes.begin(),pacotes.end(),cmp);
    for(int k = 0; k<n;k++)
        cout << pacotes[k].nome << " " << pacotes[k].energia << endl;
    
}