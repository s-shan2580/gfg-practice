class Solution {
public:
    int lowerBound(vector<int>& arr, int x) {

        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int ans= -1;
        
        if(arr[n-1]< x){
            return n;
        }

        while (start <= end) {
            int mid = start + (end-start)/2 ;

            if (arr[mid]  >= x) {
                ans=mid ;
                end=mid-1 ;
            }
            else {
                
                start=mid+1;
               
            }
        }

        return ans;
    }
};