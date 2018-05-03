//Given an array with n integers, your task is to check
//if it could become non-decreasing by modifying at most 1 element.
//We define an array is non-decreasing if array[i] <= array[i + 1] holds for every i (1 <= i < n).
class Solution {
public:
    bool checkPossibility(vector<int>& nums)
    {
    int count=0;
    int len=nums.size();
    int pre=nums[0];
    for(int i=1;i<len&&count<=1;i++)
        {
            if(nums[i]<pre)count++;
            if(nums[i]<pre&&i-2>=0&&nums[i]<nums[i-2])continue;
            pre=nums[i];
        }
    return count<=1;
    }
};
/*
*num[i]<num[i-2](we change num[i]=num[i-1],so we should compare num[i+1]with num[i-1])
*3425->3445 TRUE.
*3423->3443 num[i]<num[i-2]<num[i-1]FALSE,change num[i]=num[i-1]
*num[i]<num[i-2](we dont change num[i],so pre=num[i])
*2423->2223 num[i-1]>num[i]>=num[i-2]TRUE,change num[i-1]=num[i-2]
