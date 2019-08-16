#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct carro{
			int id, t;
	};
bool cmp(carro a, carro b){ //Função para decidir prioridade de desempate para ordenação
	return(a.t < b.t || (a.t == b.t && a.id < b.id));
}
int main(){
	VECTOR /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int vetor[50]; //Declaração padrão em C/C++ p/ vetores
	int n, num;
	vector <int> vet;
	//vector <int> vet(?); ? - Número de posições desejadas
	while(cin >> num)
		vet.push_back(num);
	for (int i=0; i<vet.size();i++) //Corre o vetor
		cout << vet[i]<<endl;
	vector <int> ::iterator it; // Ponteiro para posições do vector
	for(it = vet.begin();it!=vet.end();it++) //"Correndo" vetor com ponteiros
			cout << *it << endl;
	vet.clear(); //Apaga todas as posições do vetor, volta ao estado inicial
	vet.erase(vet.begin()) // Apaga a primeira posição do vetor, retira da memória
	vet.erase(vet.begin()+2,vet.end()) //Apagaria da terceira posição até a última
	sort(vet.begin(),vet.end()); //Ordena do inicio ao fim do vetor crescentemente
	sort(vet.rbegin(),vet.rend());//Ordena decrescentemente
	reverse(vet.begin(),vet.end()); //Ordena o inverso do estado atual o vetor
	sort(vet.begin(),vet.end(),greater<int>()); //Ordena também decrescentemente

	VECTOR E STRUCTS///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	vector<carro> carros;
	carro aux;
	while(cin >> aux.t >> aux.id) //Para alocação dinâmica
		carros.push_back(aux);
	for(int i=0;i<10;i++) //Para alocação estática
		cin >> carros[i].t>> carros[i].id;

	sort(carros.begin(),carros.end(),cmp);

}
