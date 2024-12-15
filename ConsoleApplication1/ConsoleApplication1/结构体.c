//#include<stdio.h>
//#include<string.h>
//typedef struct human
//{
//    char name[100];
//    int blood;
//    int attack;
//    int defence;
//}human;
//void modify(human* nu);
//int main()
//{
//    human nu1 = { "大一", 456, 24, 56 };//第一种
//    struct human nu2;
//    nu2.blood = 2568;
//    nu2.attack = 8954;
//    nu2.defence = 365;
//    strcpy(nu2.name, "大二");//第二种
//    modify(&nu1);
//    printf("接受到的原始数据blood：%d，attack：%d,名%s\n", nu1.blood, nu1.attack,nu1.name);
//    return 0;
//}   
//
//void modify(human* nu)
//{
//    printf("接受到的原始数据blood：%d，attack：%d\n", nu->blood, nu->attack);
//    printf("修改血量\n");
//    scanf("%d", &((*nu).blood));//blood解引用后是一个变量，需要加上&指示地址
//    printf("修改名字\n");
//    scanf("%s", (*nu).name);//name本身是一个字符数组，对其解引用后数组退化指示地址
//
//}