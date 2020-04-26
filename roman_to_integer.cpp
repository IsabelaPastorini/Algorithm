#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int romanToInt(string A) {
    int total = 0;
    for(int i = 0; i < A.length() ; i++){
        //I, V, X, L, C, D, M
        if(A[i] == 'M')
            total += pow(10,3);
        else if(A[i] == 'C' && A[i+1] == 'M'){
            total += 900;
            i++;
        }        
        else if(A[i] == 'C' && A[i+1] == 'D'){
            total += 400;
            i++;
        }
        else if(A[i] == 'X' && A[i+1] == 'C'){
            total += 90;
            i++;
        }        
        else if(A[i] == 'X' && A[i+1] == 'L'){
            total += 40;
            i++;
        }
        else if(A[i] == 'I' && A[i+1] == 'X'){
            total += 9;
            i++;
        }        
        else if(A[i] == 'I' && A[i+1] == 'V'){
            total += 4;
            i++;
        }
        else if(A[i] == 'D'){
            total += 500;
        }
        
        else if(A[i] == 'C'){
            total += 100;
        }
        
        else if(A[i] == 'L'){
            total += 50;
        }
        
        else if(A[i] == 'X'){
            total += 10;
        }
        
        else if(A[i] == 'V'){
            total += 5;
        }
        
        else if(A[i] == 'I'){
            total += 1;
        }
    }
    return total;
}


int main(){
    cout << romanToInt("MCM");
    return 0;
}