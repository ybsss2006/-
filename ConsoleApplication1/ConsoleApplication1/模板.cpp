//#include<stdio.h>
//int main()
//{
//    return 0;
//}          //交换函数
//void swap(void* p1, void* p2, int len)//后面函数里定义的指针会消失，故交换地址里的数据，而不交换地址
//{
//    char* pc1 = p1;
//    char* pc2 = p2;
//    char temp;
//    for (int i = 0; i < len; i++)
//    {
//        temp = *(pc1 + i);
//        *(pc1 + i) = *(pc2 + i);
//        *(pc2 + i) = temp;
//
//    }
//}