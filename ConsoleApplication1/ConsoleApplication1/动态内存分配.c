//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    /*
//      stdlib.h
//      malloc 申请空间（连续）
//      calloc 申请空间+初始化
//      realloc 修改空间大小      
//       修改后单开另一片空间，但和原来的空间相互联系。
//       
//       
//      free  释放空间
//    
//    
//    */
//    int* p = malloc(100 * sizeof(int));//int* p = (int* )malloc(100 * sizeof(int));  强转
//    //赋值
//    for (int i = 0; i < 100; i++)
//    {
//        //*(p + i) = i*i;
//        p[i] = i * i;       //p[i]等价于*(p+i),p[i]暗含了解引用的功能
//    }
//    int* pp = realloc(p,200*sizeof(int));
//    free(pp);
//    //遍历
//    for (int i = 0; i < 100; i++)
//    {
//        printf("%d\n", *(pp + i));
//        printf("%d\n", pp[i]);
//        
//    }
//    return 0;
//}         