//Link for the problem: https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
//Is basic find the sum of a given array, returning the start and end position
#include <bits/stdc++.h>

using namespace std;

int find_post(int array[],int sum,int size_array){
    int total_sum = 0;
    int pos_ini, pos_fin;
    pos_ini = 0;
    for(int i = 0; i< size_array; i++){
        total_sum += array[i];
        if(total_sum > sum){
            i = pos_ini;
            pos_ini++;
            total_sum = 0;
        }
        if(total_sum == sum){
            pos_fin = i;
            printf("%d %d\n",pos_ini+1,pos_fin+1);
            return 0;
        }
    }
        printf("-1\n");
        return 1;
}

int main(){
    //Testing examples, only to check if the function
    //do the right thing 
    int number_cases = 1;
    int size_array = 10;
    int expect_sum = 15;
    int a[size_array] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   // find_post(a,expect_sum,size_array);
    size_array = 5;
    expect_sum = 12;
    int b[size_array] = {1, 2,3,7,5};
   // find_post(b,expect_sum,size_array);
    number_cases = 0;

    scanf("%d",&number_cases);
    while(number_cases){
        scanf("%d %d",&size_array,&expect_sum);
        int array[size_array];
        for(int i = 0; i < size_array; i++)
            scanf("%d",&array[i]);
        find_post(array,expect_sum,size_array);
        number_cases--;
    }   
    return 0;
}