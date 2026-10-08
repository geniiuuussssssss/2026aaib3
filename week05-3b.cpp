//week05-3b.cpp 學習計畫 built-in function 第1題
//Leetcode Length of last word 最後那個字,有幾個字母
//其實前面需要寫#include <stringstream> 不過leetcode幫你偷偷寫好了
class Solution {
public:
    int lengthOfLastWord(string s) {
        //要用stringstream之前 要先#include<stringstream>
       stringstream ss(s);//week05 string字串stream串流
       //week04 c++圓括號 是丟進去物件 初始化 參數
       string ans;//week02 c++字串宣告
       while(ss>>ans){//今天week05-1.cpp有用到 很像cin的iostream
        //甚麼都不做
       }
       return ans.length();//week01 week02字串長度
    }
};
