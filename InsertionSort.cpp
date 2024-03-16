#include <iostream>
#include <vector>
using namespace std;
void swap(int &a , int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void InsertionSort(vector<int> &arr) {
    int n = arr.size();
    for(int i=1;i<n;i++) {
        int j = i;
        while(j>0 && arr[j] < arr[j-1]) {
            swap(arr[j-1],arr[j]);
            j--;
        }
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

    InsertionSort(arr); // Apply Bubble Sort Algorithm on the array

    cout<<"Sorted array is:\n";  // Print Sorted Array
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" "; 
    }
    return 0;
}