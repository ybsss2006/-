//#include<stdio.h>
//#include<math.h>
//#include<time.h>
//#include<stdlib.h>
//int contains(int arr[], int len, int num)//判断数组中是否含有相同的值，若有返回1，若没有反回0
//{
//	for (int i = 0; i < len; i++)
//	{
//		if(num==arr[i])
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
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
//	int arr[10];
//	srand(time(NULL));
//	int number = 0;
//	   for (int i = 0; i < 10; )//将i++放入判断，若不满足再次循环时，i还是原来那个i，不会发生跳过
//	    {
//	         int x = rand()%100+1;
//			 int num = contains(arr, i+1, x);
//			 if (num == 0)
//			 {
//				 arr[i] = x;
//				 i++;
//				 number = number + x;
//			 }
//	
//	   }
//	   printf("总和%d\n", number);
//	   int len = sizeof(arr) / sizeof(arr[0]);
//	   bianli(arr, len);
//	   printf("平均数%d\n", number / 10);
//	   int count = 0;
//	   for (int j = 0; j < len; j++)
//	   {
//		   if (arr[j] < (number / 10))
//		   {
//			   count++;
//		   }
//	   }
//	   printf("低于平均数的有%d个\n", count);
//		return 0; 
//}