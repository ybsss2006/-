//#include<stdio.h>
//int y1(int n1, int n2);
//int y2(int n1, int n2);
//int y3(int n1, int n2);
//int y4(int n1, int n2);
//
//
//int main()
//{
//   
//    printf("������չʾ���Ǿž�\n");
//    for (int i = 1; i <= 9; i++)
//    {
//        int k = 1;
//        for (int j = 1; j <= i; j++)
//        {
//            printf("%d * %d = %d\t  ", k, i, k * i);// \t:�Ʊ��  ���ȿɱ�Ĵ�ո�
//            k++;
//        }
//        printf("\n");
//    }
//    printf("������չʾ����\n");
//    int (*p[4])(int, int) = { y1,y2,y3,y4 };
//    printf("%d\n", p[0](1, 1));
//    
//    return 0;
//}
//
//int y1(int n1, int n2)
//{
//    return n1 + n2;
//}
//int y2(int n1, int n2)
//{
//    return n1 - n2;
//}
//int y3(int n1, int n2)
//{
//    return n1 * n2;
//}
//int y4(int n1, int n2)
//{
//    return n1 / n2;
//}