//#include<stdio.h>
//#include<math.h>
//#include<time.h>
//#include<stdlib.h>
//int contains(int arr[], int len, int num)//�ж��������Ƿ�����ͬ��ֵ�����з���1����û�з���0
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
//void bianli(int arr[], int len)//��������е�����
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
//	   for (int i = 0; i < 10; )//��i++�����жϣ����������ٴ�ѭ��ʱ��i����ԭ���Ǹ�i�����ᷢ������
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
//	   printf("�ܺ�%d\n", number);
//	   int len = sizeof(arr) / sizeof(arr[0]);
//	   bianli(arr, len);
//	   printf("ƽ����%d\n", number / 10);
//	   int count = 0;
//	   for (int j = 0; j < len; j++)
//	   {
//		   if (arr[j] < (number / 10))
//		   {
//			   count++;
//		   }
//	   }
//	   printf("����ƽ��������%d��\n", count);
//		return 0; 
//}