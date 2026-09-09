//week01-2.cpp soit106-adv-001
#include <iostream> ///c++輸入輸出,功能強大
int main()
{
	int N;
	std::cin >>N;  ///c++輸入資料 標準::輸入 送到右邊 N
	int b = N, ans = 0;
	while (N>0){
		ans = ans*10 + N%10;
		N =N/10;
	}
	///c++輸入資料,將右邊的整數,依序送到左邊 送出
    //std::cout <<b<<ans<<b+ans;//錯誤答案
	std::cout<<b<<"+"<<ans<<"="<<b+ans<<std::endl;
    ///std::cout<<b<<"+"<<ans<<"="<<b+ans<<"\n";
	//printf("%d+%d=%d\n", b,ans, ans+b);//大一下教的
}
