#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
void jd(int a[])
{
    //
}
int main()
{
    char arr1[] = "               ";
    char arr2[] = "***************";
    int mid = strlen(arr1) / 2 ;
    int left = mid;
    int right = mid;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    jd(arr);
    while (left >= 0)
    {
        arr1[left] = arr2[left];
        arr1[right] = arr2[right];
        printf("%s\n", arr1);
        Sleep(1000);
        system("cls");
        left--;
        right++;
    }
    return 0;
}      