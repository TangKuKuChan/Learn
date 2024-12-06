#include <stdio.h>

int main() {
    int b[32];
    b[0] = 0;
    printf("%d", b[0]);  // 输出0并换行
    fflush(stdout);        // 强制刷新输出缓冲区
    return 0;
}