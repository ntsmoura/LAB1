#include<map>
#include<iostream>
using namespace std;
#include<string>
int main(){
    float cont=0;
    map <string,string> m;
    string origi;
    map<string,string> ::iterator it;
    while(true){
        cin>>cmp;
        if(cmp=="FIM") break;
        m[cmp]+=1;
        cont++;
    }
    cout.precision(2);
    for(it = m.begin();it!=m.end();it++){
        cout << (*it).first << " " << fixed << ((*it).second/cont)*100 << endl;
    }
}
