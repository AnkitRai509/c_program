include<stdio.h>
int main()
{                                                char name[100],address[100];
int age;
float height;                                    printf("enter the name,address,age,height ");    scanf("%s,%s,%d,%f",name,address,&age,&height);  printf(" name:%s\n address:%s\nage:%d\nheight:%f",name,address,age,height);
}