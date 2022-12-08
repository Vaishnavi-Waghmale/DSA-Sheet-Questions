#include <iostream>
using namespace std;

//Two pointer approach
//Time complexity - O(N)
int main() {
    int arr[] =  { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    
    int l =0;
    int r = 8;
    
    while(l<r){
        if(arr[l]<0 && arr[r]>0){
            r++;
            l++;
        }
        else if(arr[l]>0 && arr[r]<0){
            swap(arr[l], arr[r]);
            l++;
            r++;
        }
        else if(arr[r]<0 && arr[l]<0){
            l++;
        }
        else {
            r--;
        }
    }
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
	
	
	return 0;
}
