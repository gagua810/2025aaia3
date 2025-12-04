///week13-1.cpp 聖誕倒數程式
///點擊adventofcode.com網址
///在leetcode的playground寫
///stdin可以放程式
///登入github看到謎題
int main() {
    char c; ///字母對應方向 L左轉 R右轉
    int d; ///數字要轉動幾格
    int now = 50; ///一開始的密碼鎖指向50
    int ans = 0; ///轉動時有幾次停在0的地方?(通關密碼)
    while(cin>>c>>d){
        ///if(c=='L') cout<<"往左轉"<<d<<"格\n";
        ///if(c=='R') cout<<"往右轉"<<d<<"格\n";
        if(c=='L') now = now - d; ///減掉
        if(c=='R') now = now + d; ///加上

        now = (now%100 +　100)% 100; ///太大的 太小的都限制在0-99
        ///cout << "現在的刻度是: " << now << "\n";
        if(now==0) ans++; ///轉動時有幾次停在0的地方?(通關密碼)
    }
    cout << "答案是: " << ans;
}
