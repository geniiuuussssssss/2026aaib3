// week08-2.cpp 學習計畫 Matrix 第1題
// LeetCode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size(), N = accounts[0].size();
        int ans = 0;//找到最多人的錢(把一行的數字相加)
        for (int i=0; i<M; i++) {//左手i對應M
            int now = 0;//小迴圈前面 now是0
            for (int j=0; j<N; j++) {//右手j對應N
                now += accounts[i][j];//小迴圈後面 用now 更新 ans
            }
            ans = max(ans, now);
        }
        return ans;
    }
};
