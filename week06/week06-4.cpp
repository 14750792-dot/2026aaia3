//week06-4.cpp學習計畫第一題 simulation 第一題
//5:陣列裡5
//2:陣列裡5 2
//c:陣列裡5(刪掉了最後的2)
//d:陣列裡5 10(把最後的5,便2倍,塞入)
//+:陣列裡5 10 15(最後2個數 5+10變成15,塞入)
//答案是,把所有的變數加起來
class Solution {
public://week02教string,week03教vector<int>
    int calPoints(vector<string>& operations){
       //遇到simulation 模擬,就用for迴圈(char c:s)for(int num:a)
       vector<int> a;
       for (string s: operations){//大資料結構vector裡,裝小資料結構string
            if(s=="C"){
                a.pop_back();
            }else if(s=="D"){
                a.push_back(a[a.size()-1]*2);
            }else if(s=="+"){
                a.push_back(a[a.size()-2]+a[a.size()-1]);
            }else{
                a.push_back( stoi(s) );
            }
        }
        int ans = 0;
        for(int num : a){
           ans += num;
        }
        return ans;
    }
};
