#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

void MAX_heap(vector<int> &max_heap, int size, int pos){
  int e, d, maior;
  pos+=1;
   //Dada a posicao do pai, pega os valores correspondentes dos filhos
   e = 2*pos;
   d = 2*pos + 1;
   e--; d--; pos--;
  // cout << pos << " " << e << " " << d << endl;
  // cout << "Esquerda :" <<max_heap[e] << " Direita : "<< max_heap[d] << " Pos : "<<max_heap[pos] << endl;
   if(e <= size && max_heap[e] > max_heap[pos]){
     maior = e;
   }
   else maior = pos; //Apenas mantem que o maior continua sendo a posicao pai
   if(d <= size && max_heap[d] > max_heap[maior]) // Comparado o filho da esquerda e o pai basta apenas ver o maior
    maior = d;
    if(maior != pos){
      swap(max_heap[pos],max_heap[maior]);
      MAX_heap(max_heap, size, maior);
    }
}

void build_heap(vector<int> &max_heap,int size){
    for(int i = size/2; i >=0 ; i--)
      MAX_heap(max_heap, size, i);
}

int main(){
  vector <int> max_heap;
  int i;
  for(i = 0; i < 7; i++){
    //Push inicia na posicao 0 da funcao
    max_heap.push_back(i);
  }

  build_heap(max_heap, max_heap.size());
  for(i = 0; i < 7; i++){
    cout << max_heap[i] << " " << "i = " << i+1 << " " << endl;
  }

}
