#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    // 在这里完成你的代码
    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }
    if (b > c) {
        int t = b;
        b = c;
        c = t;
    }
    if (a > c) {
        int t = a;
        a = c;
        c = t;
    }
    result.min = a;
    result.mid = b;
    result.max = c;
}
