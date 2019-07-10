#include <iostream>
#include <vector>

using namespace std;


int merge(vector<int> &v, int inicio, int meio, int fim){
  int esq = inicio;
  int dir = meio;
  int size = v.size();
  int aux [size];
  cout << esq << " " << dir <<" Fim = " << fim <<" Meio = " << meio <<  endl;
  for (int i = inicio; i < fim; i++){
    cout << "Dir = " << v[dir] << " " ;
    cout << "Esq = " << v[esq] << " " << endl;
    if((esq < meio)  && v[esq] < v[dir] ) //direita maior que fim para o caso de ja ter se chegado no final
    {
      aux[i] = (v[esq]);
      esq++;
    }
    else{
      aux[i] = (v[dir]);
      dir++;
    }
      cout << " Aux =  " << aux[i] << " ||" << esq << " " << dir << " ";
  }

  //cout << aux[0];
  for(int i = inicio; i < fim; i++){
    v[i] = aux[i];
  //  cout << v[i] << " ";
  }
    cout << endl;
}


int merge_sort (vector<int> &v,int inicio,int fim){
  int meio;

  if(fim - inicio < 2) return 0;

    meio = (inicio+fim)/2;
    merge_sort(v, inicio, meio); //Primeira metade
    merge_sort(v, meio+1, fim);  //Segunda metade
    merge(v, inicio, meio, fim);
}

int main(){
  vector <int> v = {3,5,6,1,2,4};
  merge_sort(v, 0, v.size());
  int i;
  cout << endl;
  for(i =0 ; i < v.size(); i++)
    cout << v[i] << " ";

return 0;
}
