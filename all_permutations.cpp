#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print(const std::vector<int>& v)
{
    for (int e : v) {
        std::cout << " " << e;
    }
    std::cout << std::endl;
}

void generate_permutations(vector<int> &A){
    //Permutation using the function next_permutation
    //from algorithm library
    do{
        print(A);
    } while(next_permutation(A.begin(),A.end()));
}

void basic_permutations(const std::vector<int>&A){
    int i,j,k;
    int largest_element;

    vector<int> max_vec;
    vector<int> sol;    
    for(i = 0; i < A.size(); i++){
        for(j = i; j < A.size(); j++){            
            for(k = i; k <=j; k++){
                     sol.push_back(A[k]);
            }
      //Example of the maximum element
        largest_element  = *max_element(sol.begin(),sol.end());
        max_vec.push_back(largest_element);            
        print(sol);
        sol.clear();
        }
    }
    print(max_vec);
}

int main(){
    vector<int> permutations;
    permutations.push_back(1);
    permutations.push_back(2);
    permutations.push_back(4);
    generate_permutations(permutations);
    basic_permutations(permutations);
}