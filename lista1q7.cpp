#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct data date;
struct data{
    int dia,mes,ano;
};
bool cmp(data a, data b){
    return (a.ano < b.ano || (a.ano == b.ano && a.mes < b.mes) ||
     (a.ano == b.ano && a.mes == b.mes && a.dia < b.dia));
}
int main(){
    date data;
    vector <date> datas;
    while(cin >> data.dia >> data.mes >> data.ano) datas.push_back(data);
    sort(datas.begin(),datas.end(),cmp);
    for(int i =0; i<datas.size();i++) 
        cout << datas[i].dia << " " << datas[i].mes << " " << datas[i].ano << endl;
    
}