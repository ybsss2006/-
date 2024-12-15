//#include<stdio.h>
//void swap(int* p1, int* p2)
//{
//    int tempt = *p1;
//    *p1 = *p2;
//    *p2 = tempt;
//}
//int* methond()
//{
//    static int c = 65;
//    return &c;
//}
//int main()
//{
//    int a, b;
//    int* point_1, *point_2;
//    scanf("%d %d", &a, &b);
//    point_1 = &a;
//    point_2 = &b;
//    swap(point_1, point_2);
//    printf("%d,%d\n", a, b);
//    printf("%d,%d\n", *point_1, *point_2);
//    int c = 32;
//    int* p1 = methond();
//    printf("%d\n", c);
//    printf("%d", *p1);
//    return 0;
//}