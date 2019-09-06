#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack <int> x;
    stack <int> y;
    int m,n,o,tot=0;
    cin >> m;
    for(int i =0; i<m;i++){
        cin >> n >> o;
        x.push(n);
        y.push(o);
    }
    while(!x.empty() && !y.empty()){
        int ash = x.top();
        int gary = y.top();
        int result = ash - gary;
        if(result > 0){
             x.pop();
             x.push(result);
             y.pop();
        }
        else if (result < 0){
            y.pop();
            y.push(result*-1);
            x.pop();
            tot++;
        }
        else {
            x.pop();
            y.pop();
            tot++;
        }
    }
    printf("%d",tot);
}