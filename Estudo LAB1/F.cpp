#include <iostream>
#include <vector>
#include<algorithm>
#include<string>
#include<utility>
using namespace std;
int main(){
    vector <float> alturas;
    int mat,tim;
    float n;
    cout.precision(2);
    cin >> mat >> tim;
    for(int k = 0; k<mat;k++){
        cin >> n;
        alturas.push_back(n);
    }
    if (mat/tim<6) cout << "impossivel";
    else{
        int cont = 0;
        sort(alturas.rbegin(),alturas.rend());
        for(int z = 0; z<tim;z++){
            cout << "Time " << z+1 <<endl;
            while(true){
                cout << fixed << alturas[cont] << " ";
                cont++;
                if(cont%6==0) break;
            }
            cout << endl;
        }
    }
}