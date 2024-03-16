#include <iostream>
#include <vector>
using namespace std;

void swap(int &a , int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void SelectionSort(vector<int> &arr) {
    int n = arr.size();
    for(int i=0;i<n-1;i++) {
        int min = INT_MAX;
        int index;
        for(int j=i;j<n;j++) {
            if(arr[j] < min) {
                min = arr[j];
                index = j;
            }
        }
        swap(arr[i],arr[index]);

    }
    
}
int main() {
    int n;
    cout<<"Enter size of array:";
    cin>>n; // Take as input the size of the array

    vector<int> arr(n);  // Declare an array of size n

    cout<<"Enter elements:\n";  // Input elements of the array
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<"Elements are:";  // Print Original Array
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    SelectionSort(arr); // Apply Bubble Sort Algorithm on the array

    cout<<"Sorted array is:\n";  // Print Sorted Array
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" "; 
    }
    return 0;
}