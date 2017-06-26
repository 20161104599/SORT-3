//
//  main.c
//  SORT     3
//
//  Created by 20161104599 on 17/6/15.
//  Copyright © 2017年 20161104599. All rights reserved.
//





#include <stdio.h>
int main()
{
    FILE *fp1;
    char str1[65];
    char str2[65];
    char lat[20];
    char time[20];
    char date[20];
    char lon[20];
    char v[20];
    char head[20];
    int i;
    fp1=fopen("//Users//a20161104597//Desktop//SORT 3//GPS170510.log","r+");
    fscanf(fp1,"%s%s",str1,str2);
    printf("结果: %s\n%s\n",str1,str2);
    for(i=0;i<8;i++)
        lat[i]=str1[i+16];
    lat[8]='\0';
    printf("纬度：%s\n",lat);
    for(i=0;i<6;i++)
        time[i]=str1[i+7];
    time[6]='\0';
    printf("时间：%s\n",time);
    for(i=0;i<9;i++)
        lon[i]=str1[i+27];
    lon[9]='\0';
    printf("经度：%s\n",lon);
    for(i=0;i<5;i++)
        v[i]=str1[i+39];
    v[5]='\0';
    printf("地面速率：%s\n",v);
    for(i=0;i<5;i++)
        head[i]=str1[i+45];
    head[5]='\0';
    printf("地面航向：%s\n",head);
    for(i=0;i<6;i++)
        date[i]=str1[i+51];
    date[6]='\0';
    printf("日期：%s\n",date);
    for(i=0;i<8;i++)
        lat[i]=str2[i+14];
    lat[8]='\0';
    printf("纬度：%s\n",lat);
    for(i=0;i<6;i++)
        time[i]=str2[i+7];
    time[6]='\0';
    printf("时间：%s\n",time);
    for(i=0;i<9;i++)
        lon[i]=str2[i+25];
    lon[9]='\0';
    printf("经度：%s\n",lon);
    fclose(fp1);
    return 0;
}
