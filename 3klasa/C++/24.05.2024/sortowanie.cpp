#include <iostream>

using namespace std;

int bubbleSort(int arr[], int n) {
    int c=0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                c++;
                swap(arr[j],arr[j+1]);
            }
        }
        }
        return c;
}
        int main() {


int A[10]={3,2,1,4,5,6,7,8,9,10};

//a
int maks=A[0];
int mini=A[0];
for(int i=1;i<10;i++){
if(A[i]>maks) maks=A[i];
if(A[i]<mini) mini=A[i];
}
cout<<mini<<" "<<maks<<endl;
        
   bubbleSort(A , 10);     
        
        
        
        
        }