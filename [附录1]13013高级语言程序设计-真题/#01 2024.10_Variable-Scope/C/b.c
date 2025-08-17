#include <stdio.h>

extern int count;  // 声明 count 变量，告诉编译器 count 是在其他文件中定义的

int main() {
    printf("Count from b.c: %d\n", count);
    return 0;
}
