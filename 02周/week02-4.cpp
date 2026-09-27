///week02-4.cpp 學習計畫 basic 第2題
///leetcode 389.Find the Difference
///給你2個字串，右邊打亂後，多了一個，找出來
///整理遺下左邊 s 的字母，再讓右邊t用掉 不夠用時 找答案
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[26]={}; //用陣列 來統計左邊s的字母 大括號{} 代表都是0
        for(char c : s){ //c++進階for迴圈 可把字母一個一個取出來
            H[c-'a'] += 1;//統計字母出現次數 (這個字母 又多了一個)
        }
        for(char c : t){ //c++進階for迴圈 可把字母一個一個取出來
            H[c-'a'] -= 1;//用掉一個字母
            if(H[c-'a']<0) return c; //找到答案了
        }
        return ' ';
    }
};
