//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int m_d[]={31,29,31,30,31,30,31,31,30,31,30,31};
//int m_d1[]={31,28,31,30,31,30,31,31,30,31,30,31};
//int main()
//{
//    int month=1,day=1,month2=10,day2=1,week=6,sum=0,year=2000,year2=2020,flag=0;
//    while(year<year2||(year==year2&&month<month2)||(year==year2&&month==month2&&day<=day2))
//    {
//        flag= year%400==0 || (year%4==0&&year%100!=0) ? 1 : 0;
//        if(day>(flag ? m_d[month-1]:m_d1[month-1]))
//            day-=flag ? m_d[month-1]:m_d1[month-1],month++;
//        if(month>12)
//            month-=12,year++;
//        week==1||day==1 ? sum+=2 : sum++;
//        week++;
//        week=week==7 ? 7 : week%7;
//        day++;
//    }
//    printf("%d\n",week);
//    printf("%d",sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char arr[60];
//    scanf("%*3s%4s",arr);
//    printf("%s",arr);
//    return 0;
//}
#include<stdio.h>
int main()
{
    char arr[]="123456";
    char arr1[80];
    sscanf(arr,"%*2s%2s",arr1);
    printf("%s",arr1);
    return 0;
}
