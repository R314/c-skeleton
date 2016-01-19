#include "stdio.h"
#include<stdlib.h>
void find(){}/*查找通讯录中的信息*/
void delete(){}/*删除通讯录中的信息*/
void add(){}/*向通讯录中添加信息*/
void print(){}/*打印出通讯录中的所有信息*/
void change(){}/*编辑通讯录中的信息*/
int main(void) {
    char a;/*使用do while循环体可以进行多次操作*/
    do{/*通过输入数字来表达想要实现的功能*/
        printf("提示：输入1为查找信息，输入2为删除信息，输入3为添加信息，输入4为打印所有信息,输入5为修改信息，输入#为退出通讯录。\n");
        scanf("%c",&a);/*在输入完字符后按下回车键，此时会产生多余的回车符，用getchar函数把回车符提走*/
        getchar();
        if(a=='1') {
            find();
        } else if(a=='2') {
            delete();
        } else if(a=='3') {
            add();
        } else if(a=='4') {
            print();
        } else if(a=='5') {
            change();
        } else if(a=='#') {
            exit(0);
        } else {
            printf("请输入正确的数字\n");
        }
    }while(a!='#');
}
