//week08-1.cpp 最有錢的人
//leetcode
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(vector<int>a:accounts){//大資料結構取出中資料結構
            int now=0; //迴圈前面now是0
            for(int num:a){ //中資料結構取出小資料結構
                now+=num;
            }
            ans=max(ans,now);//迴圈後面拿出來用
            //以前適用if(now>ans)ans=now;
        }
        return ans;
    }
};
