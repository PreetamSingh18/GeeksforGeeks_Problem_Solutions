//  Code By Preetam Singh
//  Quick Sort
//  Question Link-> https://practice.geeksforgeeks.org/problems/quick-sort/1


class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low>=high){
            return;
        }
        int ind=partition(arr,low,high);
        quickSort(arr,low,ind-1);
        quickSort(arr,ind+1,high);
        
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int pivot=arr[low];
        int i=low+1;
        int j=high;
        
        while(i<=j){
            while(i<=j && arr[i]<=pivot){
                i++;
            }
            while(j>=i && arr[j]>=pivot){
                j--;
            }
            if(j<=i){
                break;
            }
            else{
                swap(arr[i],arr[j]);
            }
            
        }
        swap(arr[low],arr[j]);
        return j;
       
    }
};
