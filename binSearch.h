#include "delSelSort.h"
using namespace std;

int binSearch(int size, int array[],int target){
    //sort array and initialize the number of comparisons
    int comparisons=0;
    delsort(size,array);
    //make the index marker values
    int first=0;
    int last=size-1;
    int middle=last/2;
    cout<<endl;
   
    while(array[middle]!=target){
         
        middle=(last+first)/2;
        cout<<"first: "<<first<< " middle: "<<middle<<" last: "<<last<<endl;
        comparisons++;
        
          if(middle==first ){
            
            
            return(comparisons);
        }
        if(array[middle]>target){
            last=middle-1;

        }
        if(array[middle]<target){
            first=middle+1;

        }
      
        if(comparisons==10){
            break;
        }
       

    }




    return (0);

}