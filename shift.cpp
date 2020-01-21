#include<iostream>

using namespace std;

void bitwaise(int n){
    for(int i = 0; i < n; i ++){
        if((i & n) == i){
            cout << i << endl;
        }
    }
}

int main(){
    int M = 10011;
    int mask = (1 << 2);
    //printf("%d %d", M, mask);
    //bitwaise(5);
    return 0;
}