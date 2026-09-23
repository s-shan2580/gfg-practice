class Solution {
	public:
	
	// if mid power n == m ; return 1 -> Got the reqd no.
	// if mid power (1->n) in between if at any middle power , ans > m ;
	// return 0 -> means search left half for the no. , no need to calc furthur power
	// if mid power n < m ; return 2 -> means search right half for the reqd no.
	
	int checkPower(int mid, int n, int m) {
		long long ans = 1;
		
		for (int i = 0; i<n; i++) {
			ans *= mid;
			if (ans>m)
				return 0;
		}
		
		if (ans == m)
			return 1;
		else
			return 2;
		
	}
	
	int nthRoot(int n, int m) {
		
		int start = 1;
		int end = m;
		
		if(m==0) return 0;
		
		while (start <= end) {
			
			int mid = start + (end - start) / 2;
			
			int value = checkPower(mid, n, m);
			
			if (value == 1) {
				return mid;
			}
			else if (value == 2) {
				start = mid + 1;
			}
			else {
				end = mid - 1;
			}
		}
		
		return - 1;
	}
};
