#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include <vector>

using namespace std;

void find_hope(vector<unordered_set<string>> &deposit_container, vector<string> &req){
    int max = INT8_MAX;
    int index = 0;
    unordered_map<int,int> index_max(deposit_container.size());
    for(int i = 0; i < deposit_container.size(); i++){
        for(int j = 0; j < req.size(); j++){
            for(int k = 0; k < deposit_container.size(); k++){
                if(deposit_container[k].count(req[j]) && !deposit_container[i].count(req[j])){
                    cout << req[j] << endl;
                        if(index_max[i] < abs(i-k)){
                            index_max[i] = (abs(i-k));
                            cout << "i => " << i << " = " <<index_max[i] << endl;
                        }                    
                }
            }
        }
    }
    int i;
    for(i = 0; i < deposit_container.size(); i++){
        if(index_max[i] < max){
            max = index_max[i];
            index = i;
        }
    }
    printf("\nIndex of min steps: %d", index);   
}

int  main(){
    vector<unordered_set<string>> deposit_container;
    unordered_set<string> features;
    features.insert("f1");
    features.insert("f2");
    features.insert("f3");
    deposit_container.push_back(features);
    features.clear();

    features.insert("");
    deposit_container.push_back(features);
    features.clear();

    features.insert("f4");
    deposit_container.push_back(features);
    features.clear();

    
    features.insert("");
    deposit_container.push_back(features);
    features.clear();

    
    features.insert("f2");
    features.insert("f4");
    deposit_container.push_back(features);
    features.clear();

    vector<string> req;
    req.push_back("f1");
    req.push_back("f4");

    find_hope(deposit_container,req);
    return 0;
}