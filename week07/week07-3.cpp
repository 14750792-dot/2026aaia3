//week07-3.cpp
//機器人繞圈圈
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x=0,y=0,d=0; //d是0:北 1:東 2:南 3:西
        for (char c:instructions){
            if (c=='R') d=(d+1)%4; //右
            if (c=='L') d=(d-1+4)%4; //左
            if (c=='G') {
                if(d==0) y++;//北
                if(d==1) x++;//東
                if(d==2) y--;//南
                if(d==3) x--;//西
            }
        }
        //指令走完離開迴圈要檢查
        if(x==0 && y==0) return true;
        if(d !=0) return true;
        return false;
    }
};
