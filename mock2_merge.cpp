#include <iostream>
#include<vector>

using namespace std;

int main(){
    vector<pair<int,int>> intervalos1;
    intervalos1.push_back(pair<int,int>(0,3));
    //intervalos1.push_back(pair<int,int>(5,7));
    //intervalos1.push_back(pair<int,int>(9,13));

    
    vector<pair<int,int>> intervalos2;
    intervalos2.push_back(pair<int,int>(1,4));
    //intervalos2.push_back(pair<int,int>(6,8));
    //intervalos2.push_back(pair<int,int>(11,15));

    int i = 0;
    int j = 0;
    pair<int, int> aux;
    vector<pair<int, int>> sol;
    while (i != intervalos1.size() || j != intervalos2.size())
    {
        /* code */
    }
    
    if(intervalos1[i].first < intervalos2[j].first){    
        //Middle interval
        if(intervalos1[i].second > intervalos2[j].first && intervalos1[i].second < intervalos2[j].second){
            aux.first = intervalos1[i].first;
            aux.second = intervalos2[j].second;
            sol.push_back(aux);
            i++;
        }
        if(intervalos1[i].second > intervalos2[j].second){
            aux.first = intervalos1[i].first;
            aux.second = intervalos1[i].second;
            j++;
        }
        else{
            aux.first = intervalos1[i].first;
            aux.second = intervalos2[j].second;
            j++;
            i++;
        }
    }
     if(intervalos1[i].first > intervalos2[j].first){
            if(intervalos2[j].second > intervalos1[i].first && intervalos2[j].second < intervalos1[i].second){
            aux.first = intervalos2[j].first;
            aux.second = intervalos1[i].second;
            sol.push_back(aux);
            j++;
        }
        if(intervalos2[j].second > intervalos1[i].second){
            aux.first = intervalos2[j].first;
            aux.second = intervalos2[j].second;
            sol.push_back(aux);
        
            i++;
        }
     }
    
    return 0;
}