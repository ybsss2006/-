//#include<stdio.h>
//void bianli(int arr[], int len)//输出数组中的数据
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//}
//int main()
//{
//    int arr[5];
//    for (int i=0; i < 5; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    printf("----------------------------------\n");
//    int len = sizeof(arr) / sizeof(arr[0]);
//    bianli(arr, len);
//    printf("----------------------------------\n");
//    /*int arrs[5];
//    for (int i = 0; i < 5; i++)
//    {
//        arrs[i] = arr[4 - i];
//    }*/
//    //数组反转
//    int i = 0;
//    int j = len - 1;
//    while (i < j)
//    {
//        int temp = arr[i];
//        arr[i] = arr[j];
//        arr[j] = temp;
//        i++;
//        j--;
//    }
//    bianli(arr, len);
//    return 0;
//}