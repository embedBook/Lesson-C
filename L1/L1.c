// 导入头文件，即可使用头文件中的函数
#include <stdio.h>
#include <stdlib.h>

// 这是单行注释
// 宏定义
#define WIND_C  "window c"
#define LINUX_C  "linux c"
#define PI   3.14

void test_void_fun(void)
{
    print("函数调用参数为空，返回值为空\r\n");
}

void test_fun1(int price)
{
    print("函数调用,参数为%d,返回值为空\r\n",price);
}

int main(int argc,char **argv)
{

    return 0;
}