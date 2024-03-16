#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr,int low,int mid,int high) {
	vector<int> c;
	int left = low;
	int right = mid+1;
	
	while(left <= mid && right <= high) {
		if(arr[left] <= arr[right]) {
			c.push_back(arr[left]);
			left++;
		}else {
			c.push_back(arr[right]);
			right++;
		}
	}
	if(left > mid) {
		while(right <= high) {
			c.push_back(arr[right]);
			right++;
		}
	}else if (right > high) {
		while(left <= mid) {
			c.push_back(arr[left]);
			left++;
		}
	}
	int index = 0;
	for(int i=low;i<=high;i++) {
		arr[i]=c[index];
		index++;
	}
}
void MergeSort(vector<int> &arr,int low,int high) {
	
	if(low < high) {
		int mid = (low + high) / 2;
		MergeSort(arr,low,mid);
		MergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
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

    MergeSort(arr,0,arr.size()-1); // Apply Bubble Sort Algorithm on the array

    cout<<"Sorted array is:\n";  // Print Sorted Array
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" "; 
    }
    return 0;
}