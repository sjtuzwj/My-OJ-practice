vector<int> twoSum(vector<int>& nums, int target) {
	unorder_map<int, int>flag;
	for (int i = 0; ; i++)
	{
		if (flag.find(nums[i])==flag.end())//判断是否存在键
			flag.insert(pair<int, int>(target - nums[i], i));//插入键:目标值和值:本地地址
		else return vector<int>{ flag[nums[i]],i};
	}
}
