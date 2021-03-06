//O(n):kanade
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int tot=0,maxtot=INT_MIN;
		for (auto x : nums)
		{
			tot += x;
			maxtot = max(maxtot, tot);
			if (tot < 0)tot = 0;
		}
		return maxtot;
	}
};