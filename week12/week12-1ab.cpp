// week12-1a.cpp SOIT106_ADVANCE_011
# include <iostream>
using namespace std;
// 把二進位, 傳成十進位
int main()
{
    char s[10];
    cin >> s;
    int ans = 0;
    if (s[0]=='1') ans += 8;
    if (s[1]=='1') ans += 4;
    if (s[2]=='1') ans += 2;
    if (s[3]=='1') ans += 1;
    cout << ans << "\n";
}

// week12-1b.cpp SOIT106_ADVANCE_011
# include <iostream>
using namespace std;
// 把二進位, 傳成十進位
int main()
{
    char s[10];
    cin >> s;
    int ans = 0;
    for (int i=0; i<4; i++) {
        ans = ans * 2;
        if (s[i]=='1') ans += 1;
    }
    cout << ans << "\n";
}
