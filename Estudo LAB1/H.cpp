#include <iostream>
#include <queue>
#include<string>
using namespace std;
#define endl "\n";
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    queue <string> lista;
    int n,ins;
    string nome;
    cin >> n;
    for (int i = 0; i<n;i++){
        cin >> ins;
        if(ins == 1){
            cin >> nome;
            lista.push(nome);
        }
        else if(ins == 2){
            if(!lista.empty()){
                cout << lista.front() << endl;
                lista.pop();
            }
            else cout << "Lista Vazia" << endl;
        }
    }

}