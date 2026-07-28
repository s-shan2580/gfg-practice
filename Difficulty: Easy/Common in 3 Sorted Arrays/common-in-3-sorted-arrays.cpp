class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        // code here
        vector<int> res;
        int n1=a.size(); int n2=b.size(); int n3=c.size();
        int i=0;
        int j=0;
        int k=0;
        while(i<n1 && j<n2 && k<n3){
            if(a[i]==b[j] && b[j]==c[k]){
                res.push_back(a[i]);
                i++;
                j++;
                k++;
                
                //to handle duplicates
                while(i<n1 && a[i]==a[i-1]) i++;
                while(j<n2 && b[j]==b[j-1]) j++;
                while(k<n3 && c[k]==c[k-1]) k++;
            }
            else if(a[i]<b[j]){
                i++;
            }
            else if( b[j]<c[k]){
                j++;
            }
            else{
                k++;
            }
        }
        
        return res;
    }
};