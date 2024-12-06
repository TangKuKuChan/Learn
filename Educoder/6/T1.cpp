/***
 * Author : DL1024
 * Date   : 2022-11-11
 * ***/

#include <iostream>

using namespace std;
using ll = long long;

void move(int number, char x, char y){
    if (x == 'B' || y == 'B'){
        cout << number << " 号圆盘从 " << x << " 移动到 " << y << endl;
    } else{
        // x经过B到y
        cout << number << " 号圆盘从 " << x << " 移动到 " << "B" << endl;
        cout << number << " 号圆盘从 " << "B" << " 移动到 " << y << endl;
    }
}

int Hanio(int n, char A, char B, char C){
    ll cnt1 = 0, cnt2 = 0, cnt3 = 0;
    if (n == 1){
        move(1, A, C);  // 只有一个圆盘的时候，先移动到B盘，再移动到C盘，2次
        return 2;
    } else{
        cnt1 = Hanio(n - 1, A, B, C);   // n-1个从A移动经过B到C
        move(n, A, B);                  // n号盘从A移动到B
        cnt2 = Hanio(n - 1, C, B, A);   // n-1个从C移动经过B到A
        move(n, B, C);                  // n号盘从B移动到C
        cnt3 = Hanio(n - 1, A, B, C);   // n-1个盘从A移动经过B到C
        return cnt1 + 1 + cnt2 + 1 + cnt3;
    }
}

int main( ){
    cout << "汉诺塔问题解决方案：\n";
    ll cnt = 0;
    int n = 0;

    do{
        cout << "请输入A柱子上面的圆盘数量n:";
        if (cin >> n){
            if (n == 0) break;
            cnt = Hanio(n, 'A', 'B', 'C');
            cout << n << "个圆盘从A移动到C的总次数为" << cnt << endl;
        } else break;
    } while (1);

    return 0;
}