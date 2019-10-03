#include <iostream>
#include<queue>
using namespace std;
//#define endl "\n"
int main(){
    /*iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
   int i,j;
   queue <int> fila;
   cin >> i >> j;
   int campo[100][100];
   for(int k = 0; k<i;k++){
       for(int l = 0; l<j;l++){
           cin >> campo[k][l];
       }
   }
   int ng = 0;
   for(int z = 0; z<j;z++){
       if(z%2==0){
           for(int p = 0; p<i;p++){
               if(campo[p][z]>0){
                   if(ng < 0) ng++;
                   else if(ng>=0) fila.push(campo[p][z]);
               }
               if(campo[p][z]<0){
                if(!fila.empty()){
                    int k = fila.front();
                    fila.pop();
                    if((k+campo[p][z])>=0){
                        ng = 0;
                        k += campo[p][z];
                        if(k>0){
                            fila.push(k);
                        }
                    } 
                    else {
                        ng = campo[p][z];
                        fila.push(k);
                    }
                }
                else{
                    ng = campo[p][z];
                }
               }
           }
       } else{
           for(int p = i-1;p>=0;p--){
                if(campo[p][z]>0){
                   if(ng < 0) ng++;
                   else if(ng>=0) fila.push(campo[p][z]);
               }
               if(campo[p][z]<0){
                if(!fila.empty()){
                    int k = fila.front();
                    fila.pop();
                    if((k+campo[p][z])>=0){
                        ng = 0;
                        k += campo[p][z];
                        if(k>0){
                            fila.push(k);
                        }
                    } 
                    else {
                        ng = campo[p][z];
                        fila.push(k);
                    }
                }
                else{
                    ng = campo[p][z];
                }
               }
           }
       }
   }
   int soma = 0;
   while(!fila.empty()) {
       soma+= fila.front();
       fila.pop();
   }
   cout << soma;

}
