#include <iostream>

using namespace std;

// quick sort = moves smaller elements to left of a pivot.
// recursively divide array in 2 partitions

// run-time complexity = Best case O(n log(n))
// Average case O(n log(n))
// Worst case O(n^2) if already sorted

// space complexity    = O(log(n)) due to recursion

void quickSort(int array[], int start, int end);
int partition(int array[], int start, int end);

int main() {
    int array[] = {7,1,6,8,2,0,3,4,5,9};
    int size = sizeof(array) / sizeof(array[0]); // get the size of the array
    
    quickSort(array, 0, size - 1);
    
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}

void quickSort(int array[], int start, int end) {
    
    if(end <= start) return; //base case
    
    int pivot = partition(array, start, end);
    quickSort(array, start, pivot - 1);
    quickSort(array, pivot + 1, end);		
}

int partition(int array[], int start, int end) {
    
    int pivot = array[end]; // quicksort standard
    int i = start - 1;
    
    for(int j = start; j <= end; j++) {
        if(array[j] < pivot) {
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    i++;
    int temp = array[i];
    array[i] = array[end];
    array[end] = temp;
    
    return i;
}
