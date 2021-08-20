#include <iostream>
using namespace std;

void Arrayprinting(int *A,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<A[i];
    }
}
void bubblesort(int *A,int size){
    int temp;
    int isSorted=1;
    for (int i = 0; i < size-1; i++)
        
    {   isSorted=1;
        cout<<"Number of passes ="<<i+1<<endl;
        for (int j = 0; j < size-1-i; j++)
        {
            if(A[j]>A[j+1]){
                temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
                isSorted=0;
            }
        }
        if(isSorted){
            return;
        }
        
    }
    
}
int main (){

    int A[]={4,8,2,5,9,1};
    int size=sizeof(A)/sizeof(A[0]);

    cout<<"Before Sorting\n";

    Arrayprinting(A,size);
    cout<<"After sorting \n";
    bubblesort(A,size);
    Arrayprinting(A,size);
    return 0;
}
