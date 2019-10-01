#include <iostream>
#include <vector>
//#include<numeric>
using namespace std;
//#define endl "\n"
int main(){
    /*iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
    vector <int> areas;
    int n,k;
    cin >> n;
    areas.push_back(0);
    for(int i = 1; i<=n;i++){
        cin >> k;
        if(areas[i-1]==0 || areas[i-1]== (k-1)) areas.push_back(k);
        else if(areas[i-1]!=(k-1)) {
            areas.push_back(0);
            areas.push_back(k);
            i++;
            n++;
        }
    }
    areas.push_back(0);
    vector<int>::iterator it;
    for(it = areas.begin(); it<areas.end();it++){
        if(*it!=0){
            if((*(it-1)==0 && *(it+1)!=0)) cout << *it << " ";
            else if((*(it+1)==0 && *(it-1)!=0)) cout << *it << endl;
            else if(*(it+1)==0 && *(it-1)==0) cout << *it << " " << *it << endl;
        }
    }
   
}