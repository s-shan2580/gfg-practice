class Solution {
	public:
	int countFreq(vector<int>& arr, int x) {
		// code here
		int first= -1;
		int last= -1;
		int n = arr.size();
		
		int start = 0;
		int end = n - 1;
		
		if (n == 0) {
			return 0;
		}
		
		while (start <= end) { // finding first occurance
			int mid = start + (end - start) / 2;
			if (arr[mid] == x) {
				first = mid;
				end = mid - 1;
			}
			else if (arr[mid] > x) {
				end = mid - 1;
			}
			else {
				start = mid + 1;
			}
		}
		
		start = 0;
		end = n - 1;
		
		while (start <= end) { // finding last occurance
			int mid = start + (end - start) / 2;
			if (arr[mid] == x) {
				last = mid;
				start = mid + 1;
			}
			else if (arr[mid] > x) {
				end = mid - 1;
			}
			else {
				start = mid + 1;
			}
		}
		
	    if(first==-1 && last==-1) return 0;
	    else return (last-first+1);
	}
};
