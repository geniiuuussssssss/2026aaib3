//week05-2.cpp 學習計畫 built-in function 第2題
//Leetcode 709. To Lower Case 變小寫字母
class Solution {
public:
    string toLowerCase(string s) {
        //week02教過字串s的長度 .length()
        for(int i=0;i<s.length();i++){
            if(isupper(s[i])) s[i]=s[i]-'A'+'a';
        }//s[0]='h';//先試試看把(看起來就是錯的)教你s[i]
        return s;//竟然直接送出去
    }
};
