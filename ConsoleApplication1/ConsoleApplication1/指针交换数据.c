//#include<stdio.h>
//void swap(void* p1, void* p2, int len)//后面函数里定义的指针会消失，故交换地址里的数据，而不交换地址
//{
//    char* pc1=p1;
//    char* pc2=p2;
//    char temp;
//    for (int i = 0; i < len; i++)
//    {
//        temp = *(pc1+i);
//        *(pc1+i) = *(pc2+i);
//        *(pc2+i) = temp;
//       
//    }
//}
//void bianli(int* p1, int len)
//{
//    for (int i = 0; i < len; i++)
//    {
//        printf("%d\n", *(p1 + i));
//    }
//}
//int main()
//{
//    long a = 15;
//    long b = 20;
//    swap(&a, &b, 4);
//    printf("%d\n", a);
//    printf("%d\n", b);
//    int arr[] = { 1,20,65,24,6,8,45,71 };
//    int* p3 = arr;
//    int len = sizeof(arr) / sizeof(arr[0]);
//    bianli(&arr, len);
//    return 0;
//}