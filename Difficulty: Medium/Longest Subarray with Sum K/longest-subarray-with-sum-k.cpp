class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        unordered_map<int,int>prefix_sums;
        int currSum=0;
        int maxlen=0;
        int currlen=0;

        for(int i=0; i<n; i++){
            currSum += arr[i];

            if(currSum==k){
                currlen=i+1;
                if(currlen>maxlen){
                    maxlen=currlen;
                }
            }

            if(prefix_sums.find(currSum-k)!=prefix_sums.end()){
               currlen=i-prefix_sums[currSum-k];
                if(currlen>maxlen){
                    maxlen=currlen;
                }
            }

            if (prefix_sums.find(currSum) == prefix_sums.end()) {
                prefix_sums[currSum] = i;
            }

        }

        return maxlen;
    }
};