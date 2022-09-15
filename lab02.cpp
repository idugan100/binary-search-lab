#include <cstdlib>
#include <iostream>
#include <array>
#include <cmath>
#include "time.h"
#include "binSearch.h"
#include "delSelSort.h"
const double RANDOM_LIMIT=99999;
const int ARRAY_SIZE=10000;
const double RANDOM_VALUES=1000;

using namespace std;

int main(){
    //random see for rng
    int array[ARRAY_SIZE];
    srand(time(NULL));
    for(int i=0;i<ARRAY_SIZE;i++){
        array[i]=rand()%100000;
        cout<<array[i]<<endl;
    }
    
   

    double failSum=0;
    double sucessTotal=0;
    delSelSort(ARRAY_SIZE,array);
    for(int i=0;i<RANDOM_VALUES;i++){
        int target=rand()%100000;
        int result=binSearch(ARRAY_SIZE,array,target);
        if(result==0){
            sucessTotal++;
        }
        else{
            failSum=failSum+result;
        }

    }

    
    cout<< "Report:"<<endl;
    cout<<RANDOM_VALUES<<" trials were done"<<endl;
    cout<<sucessTotal<< " were sucessfull"<<endl;
    cout<< "The total attempts for all unsucessful trials: "<<failSum<<endl;
    cout<<"Average comparisons for an unsucessful attempt: "<<failSum/(1000-sucessTotal)<<endl;
    cout<< "Expected is log base 2 of n where n = the array size: "<< log2(ARRAY_SIZE)<<endl;
    





    return 0;
}