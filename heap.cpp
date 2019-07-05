#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

void MAX_heap(vector<int> &max_heap, int size, int pos){
  int e, d, maior;
  pos+=1;
 //Given the "father" position, take the children values
   e = 2*pos;
   d = 2*pos + 1;
   e--; d--; pos--;
  // cout << pos << " " << e << " " << d << endl;
  // cout << "Left :" <<max_heap[e] << " Right : "<< max_heap[d] << " Pos : "<<max_heap[pos] << endl;
   if(e <= size && max_heap[e] > max_heap[pos]){
     maior = e;
   }
   else maior = pos; //The higher value still at the "father" postion
   if(d <= size && max_heap[d] > max_heap[maior]) //Compare children from the left and father to see who is the higher value
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
    //Push starts at the 0 of the function
    max_heap.push_back(i);
  }

  build_heap(max_heap, max_heap.size());
  for(i = 0; i < 7; i++){
    cout << max_heap[i] << " " << "i = " << i+1 << " " << endl;
  }

}
