//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    /*
//      stdlib.h
//      malloc ����ռ䣨������
//      calloc ����ռ�+��ʼ��
//      realloc �޸Ŀռ��С      
//       �޸ĺ󵥿���һƬ�ռ䣬����ԭ���Ŀռ��໥��ϵ��
//       
//       
//      free  �ͷſռ�
//    
//    
//    */
//    int* p = malloc(100 * sizeof(int));//int* p = (int* )malloc(100 * sizeof(int));  ǿת
//    //��ֵ
//    for (int i = 0; i < 100; i++)
//    {
//        //*(p + i) = i*i;
//        p[i] = i * i;       //p[i]�ȼ���*(p+i),p[i]�����˽����õĹ���
//    }
//    int* pp = realloc(p,200*sizeof(int));
//    free(pp);
//    //����
//    for (int i = 0; i < 100; i++)
//    {
//        printf("%d\n", *(pp + i));
//        printf("%d\n", pp[i]);
//        
//    }
//    return 0;
//}         