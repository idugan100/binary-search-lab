#include <array>
using namespace std;
void delsort( int size,int array[]){

    
    int ogSize=size;

    for(int j=0;j<size;j++){
    //printing
    //for(int i=0;i<ogSize;i++){
        //cout<<array[i]<<" ";
    //}
    //cout<<endl;
    //finding minimum
    int minIndex=j;
    int maxIndex=j;
    for(int i=j;i<size;i++){
        if(array[minIndex]>array[i]){
            minIndex=i;
        }
        if(array[maxIndex]<array[i]){
            maxIndex=i;
        }
    }
    //data display and swap
    //cout<< "the minninmum is "<<array[minIndex]<<" at index "<<minIndex<<endl;
    //cout<< "the maximum is "<< array[maxIndex]<<" at index "<<maxIndex<<endl;
    //cout<<"swapping..."<<endl;
    
    swap(array[minIndex],array[j]);
    if(!(j==maxIndex && size-1==minIndex)){
        swap(array[maxIndex],array[size-1]);
    }
    
    size--;
    }
    //for(int i=0;i<ogSize;i++){
      //  cout<<array[i]<<" ";
   // }
    //cout<<endl;

    
}