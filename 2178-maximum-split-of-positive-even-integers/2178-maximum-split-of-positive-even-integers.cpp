class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> ans;
        long long i = 2;
        long long crSum=0, n = finalSum;
        if(n % 2) return ans;
		
        while((crSum+i)<= n)
        {
            ans.push_back(i);
            crSum+=i;
            i+=2;
        }
		
		// add remaining difference to the last value in answer list
		int sz = ans.size();
        ans[sz-1] += (n-crSum);
        return ans;
    }
};