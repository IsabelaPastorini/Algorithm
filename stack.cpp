#include <iostream>
#include <stack>

//Problema de checar o minimo numa pilha =)
//usar uma pilha auxiliar
using namespace std;
int insert(stack<int>&s1, stack<int>&s2, int x){
  if(s1.empty()){
    s1.push(x);
    s2.push(x);
  }
  else{
  if(s2.top() > x){
    s2.push(x);
  }
  s1.push(x);
}

}

int remove(stack<int>&s1, stack<int>&s2){
  if(s1.top() == s2.top()){
    s1.pop();
    s2.pop();
  }else{
    s1.pop();
  }
}

int check_min(stack<int>s2){
  if(!s2.empty()){
    cout << s2.top() << endl;
  }
}

int main(){
  stack<int> s1;
  stack<int> s2;
  insert(s1,s2,5);
  insert(s1,s2,6);
  insert(s1,s2,3);
  insert(s1,s2,7);
  check_min(s2);
  remove(s1,s2);
  check_min(s2);
  remove(s1,s2);
  check_min(s2);
}
