class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int k=0;
        int n=arr.size();
        for(int i=n-2;i>=0;i--)
            if(arr[i]<arr[i+1]){
                  k=i; break;
            }
                 
         for(int i=n-1;i>k;i--)
             if(arr[i]>arr[k]){
                swap(arr[k],arr[i]);
                k++;
                break;
             }
        for(int i=0;i<(n-k)/2;i++)
             swap(arr[i+k],arr[n-i-1]);
        
    }
};