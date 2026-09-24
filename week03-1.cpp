//week03-1.cpp 每日挑戰 2026-09-24
//leetcode 3550.smallest index with digit sum equal to index
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        //把nums[i]每個位數加起來 是否==i
        for(int i=0;i<nums.size();i++){
            int total =0;//把nums[i]每個位數加起來
            while(nums[i]>0){//剝皮法
                total += nums[i]%10;
                nums[i]=nums[i]/10;
            }
            if(total == i) return i;
        }
        return -1;//不是 就-1
    }
};
