#include<iostream>
#include<vector>

using namespace std;

void print(const std::vector<vector<int>>& grid)
{
    for ( const std::vector<int> &v : grid )
    {
        for ( int x : v ) std::cout << x << ' ';
        std::cout << std::endl;
    }
}

vector<vector<int> > prettyPrint(int A) {
    //Creating a odd matrix
    vector<vector<int>> sol(2*A-1, vector<int>(2*A-1,0));
    int first = 0;
    int second = 2*A-2;
    //The value that will stay on the matrix
    int control = A;
    while(control > 0){
        for(int i = 0+first; i < 2*A - 1 - first; i++){
            //Filling every corner the matrix
            sol[first][i] = control;
            sol[second][i] = control;
            sol[i][first] = control;
            sol[i][second] = control;
        }
        second--;
        control--;
        first++;
    }
    return sol;
}

int main(){
    print(prettyPrint(3));
    return 0;
}