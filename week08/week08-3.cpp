//week08-3.cpp 學習計畫matrix 第三題
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //我們知道maxtrix[i][j]左手i右手j
        //往右 往下vs 往左 往上
        //j++ i++ j-- i--
        //另外有4個變數left right up down
        vector<int> ans;//用來放答案陣列
        int M= matrix.size(),N=matrix[0].size();
        int left = 0,right=N-1,up = 0,down = M-1;
        while(ans.size()<M*N){
            for(int j=left;j<=right;j++)ans.push_back(matrix[up][j]);
            up++;

            for(int i=up;i<=down;i++)ans.push_back(matrix[i][right]);
            right--;

            if(ans.size()==M*N)break;

            for(int j=right;j>=left;j--)ans.push_back(matrix[down][j]);
            down--;


            for(int i=down; i>=up;i--)ans.push_back(matrix[i][left]);
            left++;
        }
        return ans;
    }
};
