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
//    human nu1 = { "��һ", 456, 24, 56 };//��һ��
//    struct human nu2;
//    nu2.blood = 2568;
//    nu2.attack = 8954;
//    nu2.defence = 365;
//    strcpy(nu2.name, "���");//�ڶ���
//    modify(&nu1);
//    printf("���ܵ���ԭʼ����blood��%d��attack��%d,��%s\n", nu1.blood, nu1.attack,nu1.name);
//    return 0;
//}   
//
//void modify(human* nu)
//{
//    printf("���ܵ���ԭʼ����blood��%d��attack��%d\n", nu->blood, nu->attack);
//    printf("�޸�Ѫ��\n");
//    scanf("%d", &((*nu).blood));//blood�����ú���һ����������Ҫ����&ָʾ��ַ
//    printf("�޸�����\n");
//    scanf("%s", (*nu).name);//name������һ���ַ����飬��������ú������˻�ָʾ��ַ
//
//}