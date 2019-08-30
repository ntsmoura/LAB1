#include <iostream>
#include <queue>
using namespace std;
struct pessoa{
  string nome;
  char sexo;
};
int main(){
  int n;
  queue<pessoa>fila1,fila2,filamu,filah;
  pessoa p;
  cin >> n;
  for(int i=0; i<n;i++){
    cin >> p.nome >> p.sexo;
    fila1.push(p);
  }
  for(int i=0; i<n;i++){
    cin >> p.nome >> p.sexo;
    fila2.push(p);
  }
  for(int i =0; i<n;i++){
    if(fila1.front().sexo=='M'){
      filamu.push(fila1.front());
      fila1.pop();
    }
    else{
      p = fila1.front();
      fila1.pop();
      fila1.push(p);
    }
  }
  for(int i =0; i<n;i++){
    if(fila2.front().sexo=='H'){
      filah.push(fila2.front());
      fila2.pop();
    }
    else{
      filamu.push(fila2.front());
      fila2.pop();
    }
  }
  while(!fila1.empty()){
    filah.push(fila1.front());
    fila1.pop();
  }
  cout << "Fila Feminina: " <<endl;
  if(filamu.empty()) cout << "Vazia" <<endl;
  else {
    while(!filamu.empty()){
    cout << filamu.front().nome << endl;
    filamu.pop();
  }
}
cout << "Fila Masculina: " <<endl;
if(filah.empty()) cout << "Vazia" <<endl;
else{
  while(!filah.empty()){
    cout << filah.front().nome << endl;
    filah.pop();
  }
}
}
