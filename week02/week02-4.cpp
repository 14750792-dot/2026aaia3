//week02-4.cpp學習計畫 basic2
//leetcode 尋找不一樣
//給你兩個字串
//整理一下左邊s的字母,再讓右邊t用掉 不用夠時,找到答案
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[26]={}; //用陣列,來統計左邊s字母,大括號{}代表都是0
        for (char c :s){ //c++進階for迴圈,可能把字母一個一個取出來
            H[c-'a']+=1;
        }
        for (char c:t){
            H[c-'a'] -=1;
        if(H[c-'a']<0)return c;
        }
        return 0;
    }
};
