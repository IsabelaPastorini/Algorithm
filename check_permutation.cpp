#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

int compare(string string1, string string2){
  if (string1.size() != string2.size())
    return 0;
  sort(string1.begin(), string1.end());
  cout << string1 << endl;
  sort(string2.begin(), string2.end());
  cout << string2 << endl;
  if(string1 == string2)
    return 1;
  return 0;
}

int main (){

 string string1  = "dog";
 string string2  = "god";

 int resultado = compare(string1, string2);

cout << resultado;
return 0;
}
