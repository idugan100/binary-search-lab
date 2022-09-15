#include <iostream>
using namespace std;

int binSearch(int size, int array[],int target){
    //sort array and initialize the number of comparisons
    int comparisons=0;
 
    //make the index marker values
    int first=0;
    int last=size-1;
    int middle=last/2;
    
   
   
    while(array[middle]!=target){
         
        middle=(last+first)/2;
        
        comparisons++;
        if(array[middle]==target){
            break;
        }
        
          if(middle==first ){
            
            cout<<"Target value not found..."<<endl;
            return(comparisons);
        }
        if(array[middle]>target){
            last=middle-1;

        }
        if(array[middle]<target){
            first=middle+1;

        }
      
      
       

    }



    cout<<"Target value found..."<<endl;
    return (0);

}