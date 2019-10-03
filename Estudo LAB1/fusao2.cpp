#include <iostream>
#include <vector>
//#include<numeric>
#include<algorithm>
using namespace std;
#define endl "\n"
int main(){
    iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    pair<int,int> p;
    vector<pair<int,int>> vet;
    int n;
    cin >> n;
    for (int i =0; i<n;i++){
     cin >> p.first >> p.second;
     vet.push_back(p);
    }
    sort(vet.begin(),vet.end());
    vector<pair<int,int>>::iterator it;
    for(int j = 0; j<vet.size();j++){
    if(vet[j].first!=0 && vet[j].second!=0){
        for(it = vet.begin()+(j+1);it<vet.end();it++){
          // cout << "TST :" << vet[j].first << " " << vet[j].second << endl;
            if((*it).first !=0 && (*it).second!=0){
                //cout << "TST2: " << (*it).first << " " << (*it).second << endl;
                if(vet[j].first<=(*it).first && vet[j].second>=(*it).first && vet[j].second<=(*it).second){
                    vet[j].second = (*it).second;
                    (*it).first = 0;
                    (*it).second = 0;
                }
                else if(vet[j].first<=(*it).first && vet[j].second>=(*it).second) {
                    (*it).first = 0;
                    (*it).second = 0;
                }
            }
        }
    }
    }
    for(int k = 0; k<vet.size();k++) if(vet[k].first!=0 && vet[k].second!=0) cout << vet[k].first << " " << vet[k].second << endl;
   
}