#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack <string> p;
    string a;
    int comp=0;
    int m,k,result=0,fresult=0;
    cin>> m >> k;
    for(int i = 0; i<m;i++){
        cin >> a;
        if(p.empty()) p.push(a);
        else{
            string s = p.top();
            for(int l = 0; l<3;l++){
                if(a[l]!=s[l]) comp++;
            }
            if (comp == 3){
                result+=10;
                p.pop();
            }
            else p.push(a);
            comp=0;
        }
        if(p.size()==k){
            fresult=-1;
        }
    }
    if(fresult!=-1) printf("%d",result);
    else printf("game over");
    
}