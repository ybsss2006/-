//#include<stdio.h>
//
//int my_strlen(char* str)
//{
//    if (*str != '\0')
//    {
//        return my_strlen(str+1) +1;
//    }
//    else
//    {
//        return 0;
//    }
//    //return my_strlen(str++) + 1;
//}
////斐波那契数列
//int fac1(int n)
//{
//    if (n <= 2)
//        return 1;
//    else
//        return fac1(n - 1) + fac1(n - 2);
//   // int fac2(int n)
//}
////兔子2
//int fac2(int n)
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    if (n > 2)
//    {
//        for (int i = 0; i < n - 2; i++)
//        {
//            c = a + b;
//            a = b;
//            b = c;
//        }
//        return c;
//    }
//
//}
//int main()
//{
//   // char a[] = "yetuge";
//    //printf("%d\n", my_strlen(a));
//    printf("%d\n", fac1(40));
//    printf("%d\n", fac2(40));
//    return 0;
//}       