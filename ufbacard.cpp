#include<map>
#include<iostream>
using namespace std;
#include<string>
int main(){
    map <int,float> m;
    int n,aulas,mat,presentes;
    float al;
    cin >> n >> aulas;
    al = (float) aulas;
    for(int k = 0; k<n;k++){
      cin >> mat;
      m[mat] = 0;
    }
    for(int d = 0; d<aulas;d++){
      cin >> presentes;
      for(int l = 0; l<presentes;l++){
          cin >> mat;
          m[mat]+=1;
      }
    }
    map<int,float>::iterator it;
    for(it = m.begin();it!=m.end();it++){
        if((*it).second/al>=0.75){
          cout << (*it).first << ": " << aulas - (*it).second << endl;
        }
        else cout << (*it).first << ": RF" << endl;
    }

}
