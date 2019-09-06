#include <iostream>
#include <stack>
using namespace std;
int vfFormat(string frase){
    stack <char> p;
     for(int i =0;frase[i]!='\0';i++){
        switch(frase[i]){
            case ')': {
                if(p.empty()) return 0;
                char c = p.top();
                p.pop();
                if(c != '(') return 0;
                }
            break;
            case ']': {
                if(p.empty()) return 0;
                char c = p.top();
                p.pop();
                if(c != '[') return 0;
                }
            break;
            case '}': {
                if(p.empty()) return 0;
                char c = p.top();
                p.pop();
                if(c != '{') return 0;
                }
            break;
            default: p.push(frase[i]);
            }
        }
    if(p.empty())return 1;
    else return 0;
}
int main(){
  string expr;
  cin >> expr;
  if(vfFormat(expr)==1) cout << "SIM" << endl;
  else cout << "NAO" << endl;
    
  
}
