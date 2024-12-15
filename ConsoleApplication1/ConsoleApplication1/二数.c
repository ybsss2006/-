//#include<stdio.h>
//int main()
//{
//    int arr[5][3] =
//    {
//        {6,5,4},
//        {54,56,84},
//        {21,5,8},
//        {21,5,47},
//        {1,2,3}
//    };
//    int(*p)[6] = arr;//[6]决定p的步长
//    for (int i = 0; i < 5; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            printf("%d\t", *(*p + j));
//        }
//        printf("\n");
//        p++;
//    }
//    return 0;
//}