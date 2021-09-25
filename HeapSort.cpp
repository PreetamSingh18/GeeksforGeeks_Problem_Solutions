// solution By Preetam Singh(mr_vision)
// Question link- https://practice.geeksforgeeks.org/problems/heap-sort/1


class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
       int l=2*i+1;
       int r=2*i+2;
       int mid=i;
       if(l<n && arr[mid]<arr[l]){
           mid=l;
       }
       if(r<n && arr[mid]<arr[r]){
           mid=r;
       }
       if(mid!=i){
           swap(arr[mid],arr[i]);
           heapify(arr,n,mid);
       }
       
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
      for(int i=(n-2)/2;i>=0;i--){
          heapify(arr,n,i);
      }
      
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
        while(n>0){
            swap(arr[0],arr[n-1]);
            n--;
            heapify(arr,n,0);
        }
    }
};
