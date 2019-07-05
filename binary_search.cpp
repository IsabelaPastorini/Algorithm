#include <iostream>

using namespace std;

int binary_search_int(int a[], int size, int ele){
  int pos_max = size;
  int pos_min = 0;
  int k = (pos_max+pos_min)/2;

  while(pos_min <= pos_max){

    if(a[k] == ele){
      return k;
    }
    if(a[k] < ele){
      pos_min = k+1;
      k = (k + pos_max)/2;
    }
    else if(a[k] > ele){
      pos_max = k;
      k = (k + pos_min) /2;
    }
    if(pos_max - pos_min == 1)
        return -1;
    cout << pos_max << " " << pos_min << endl;
 // Return the position;
  }
  return -1;
}


int main(){
    // A vector with integers numbers
    int a[] = {1,5,8,11,15,19,24,80,120};
    int size = sizeof a / sizeof a[0];
    std :: cout << binary_search_int(a,size, 9);
    return 1;
}
