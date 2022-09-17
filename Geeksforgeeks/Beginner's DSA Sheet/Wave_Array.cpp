//Wave Array

//only logic part

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    
    void swap(int *x, int*y){
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }
    
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        
        for(int i =0; i<n-1;i+=2){
            swap(&arr[i],&arr[i+1]);
        }
        
    }
};