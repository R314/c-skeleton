#include "stdio.h"
#include<stdlib.h>
void find(){}/*查找信息*/
void delete(){}/*删除信息*/
void add(){}/*添加信息*/
void print(){}/*打印信息*/
void change(){}/*修改信息*/
int main(void){
int a;
laber:;/*设置标签，让程序可以进行多次操作*/
printf("提示：输入1为查找信息，输入2为删除信息，输入3为添加信息，输入4为打印所有信息,输入5为修改信息，输入6为退出通讯录。\n");
scanf("%d",&a);
if(a==1)
{find();
goto laber;
}
else if(a==2)
{delete();
goto laber;
}
else if(a==3)
{add();
goto laber;
}
else if(a==4)
{print();
goto laber;
}
else if(a==5)
{change();
goto laber;
}
else if(a==6)
{exit(0);
}
else
{printf("请输入正确的数字\n");
goto laber;
}
}
