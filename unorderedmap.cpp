#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>

using namespace std;

void insertion(unordered_map<int,int> &services,vector<int> &service, int insert){
    if(services.count(insert) == 0){
        service.push_back(insert);
        services.insert(pair<int,int>(insert,service.size()-1));
    }
}

void deletion(unordered_map<int,int> &services,vector<int> &service, int remove){
    int new_pos = services[remove];
    int last_pos = service.size()-1; 
    if(services.count(remove) != 0){
        //Updating the vector 
        service[new_pos] = service[last_pos];   
        services[service[last_pos]] = new_pos;
        //Deletion from both
        service.pop_back();
        services.erase(remove);
    }
}

void size(vector<int> service){
    printf("%d \n",service.size());
}
int main(){
    unordered_map<int,int> services;
    vector<int> service; 
    insertion(services,service,7);
    insertion(services,service,4);
    insertion(services,service,9);
    insertion(services,service,2);
    deletion(services,service,7);
    size(service);
    insertion(services,service,7);
    size(service);

}