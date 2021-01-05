#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here

	int testCases;
	cin >> testCases;
	
	while(testCases-- > 0){
	   int n,k;
	   cin >> n >> k;
	   int arr[n];
	   for(int i = 0; i < n; i++){
	       cin >> arr[i];
	   }
	   
	   
	     
// A utility function to swap two elements  
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
  
/* This function takes last element as pivot, places  
the pivot element at its correct position in sorted  
array, and places all smaller (smaller than pivot)  
to left of pivot and all greater elements to right  
of pivot */
int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high]; // pivot  
    int i = (low - 1); // Index of smaller element  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (arr[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  
  
/* The main function that implements QuickSort  
arr[] --> Array to be sorted,  
low --> Starting index,  
high --> Ending index */
void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi = partition(arr, low, high);  
  
        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  
	   
	   
	   
	   
	   
	   
	   

	   
	   quicksort(arr,0,n-1);
	   
	   int sum = 0;
	   int box = 0;
	   int tower = 0;
	   
	   for(int i = 0; i < n; i++){
	       
	       sum += arr[i];
	       box++;
	       
	       if(sum >= k){
	           sum =0;
	           tower++;
	       }
	       
	       if(tower == 2){
	           break;
	       }
	   }
	   if (tower != 2){
	       cout << -1 << endl;
	   }else{
	    cout << box << endl;
	   }
	}
	
	return 0;
}
