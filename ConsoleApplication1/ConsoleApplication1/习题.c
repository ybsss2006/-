//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//struct scenery
//{
//    char name[100];
//    int ticket;
//};
//int main()
//{
//    srand(time(NULL));
//    struct scenery arr[4] = { {"a",0},{"b",0}, {"c",0}, {"d",0}, };
//    
//    for (int i = 0; i < 80; i++)
//    {
//        int j = rand() % 4;
//        arr[j].ticket++;
//    }
//    int max = arr[0].ticket;
//    for (int i = 0; i < 4; i++)
//    {
//        if(max<arr[i].ticket)
//        {
//            max = arr[i].ticket;
//        }
//    }
//    struct scenery end;
//    for (int i = 0; i < 4; i++)
//    {
//        if (arr[i].ticket == max)
//        {
//            end = arr[i];
//            break;
//        }
//    }
//    printf("%s %d\n", arr[0].name, arr[0].ticket);
//    printf("%s %d\n", arr[1].name, arr[1].ticket);
//    printf("%s %d\n", arr[2].name, arr[2].ticket);
//    printf("%s %d\n", arr[3].name, arr[3].ticket);
//    printf("×îÖÕ%s %d\n", end.name, end.ticket);
//    return 0;
//}       