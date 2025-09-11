//week01-3c.cpp
# include <stdio.h> //使用 C語言 的外掛，負責 Input  Output

int main()
{
    int n;
    scanf("%d", &n);  //使用 C语言 的scan with format 讀入
    int ans = 0;
    for(int i=1; i<=n; i++){
        ans += i*i;
    }
    printf("%d" , ans); //使用 C语言 的scan with format 印出來


}