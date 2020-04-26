#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int lengthOfLastWord(const string A) {
    int aux = 0;
    for(int i = 0; i < A.length(); i++){
        if(A[i] == ' ')
            aux++;
    }
    if(aux > 0){
        for(int j = 0; j < A.length(); j++){
            if(A[j] == ' '){
                    aux --;
            }
            if(aux == 0){
                return (A.length() - 1 - j);
            }
        }
    }
    else 
        return A.length();
    return 0;
    }

int lengthOfLastWord2(const string A) {
    vector<int> length;
    if(A.size() == 0)
        return 0;
    int aux = 0;
    for(int i = 0; i < A.length(); i++){
        if(A[i] != ' '){
            aux++;
        }
        else if(A[i] == ' '){
            length.push_back(aux);
            aux = 0;
        }
    }
    if(aux != 0)
        length.push_back(aux);
    
    for(int j = length.size()-1; j >= 0; j--){
        if(length[j] != 0)
            return length[j];
    }
  return 0;
}


int main(){
string s = "Hello World  ";
//cout << lengthOfLastWord2(s) << endl;

string d = "d";
//cout << lengthOfLastWord2(d) << endl;

string e = "Wordl   ";
cout << lengthOfLastWord2(e);

return 0;
}
