#include <stdio.h>
char arr[1000];
int index=0;
int main(){
    printf("进入敏感字符管理系统\n");
    while(1)
    {
        printf("1---添加敏感字符\n");
        printf("2---删除敏感字符（最后一个）\n");
        printf("3---查看所有敏感字符\n");
        printf("4---替换敏感字符\n");
        printf("5---退出\n");
        printf("请选择相应功能:\n");
        int code;
        scanf("%d",&code);
        if(code==1)
        {
            printf("请输入要添加的敏感字符：\n");
            char mingan;
            scanf("%c",&mingan);
            scanf("%c",&mingan);
            arr[index]=mingan;
            index++;
            printf("添加成功，点击回车继续\n");
            char enter;
            scanf("%c",&enter);
            scanf("%c",&enter);
        }
        if(code==2)
        {}
        if(code==3)
        {}
        if(code==4)
        {}
        if(code==5)
        {
            printf("正在退出……\n");
            break;
        }
    }
}