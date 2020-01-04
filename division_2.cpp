#include <bits/stdc++.h>
#include <string>

//using namespace std;
//Given a string of binary, calculate how many 
//numbers are divided by 2.
int total_divisions(std::string binary){
    int sum = 0;
    for(int i = 0; i < binary.size() - 1 ; i++){
        if(binary[i+1] != '0'){
            sum += (i+1);
        }
    }
    return sum;
}


int main(){
    std::string binary = "1000";
    //Using a function to reverse my array
    reverse(binary.begin(), binary.end());     
    printf("%d",total_divisions(binary));
    return 0;
}