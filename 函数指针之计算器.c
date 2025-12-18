#include <stdio.h>

int Add(int x,int y){
    return x + y;

}

int Sub(int x,int y){
    return x -y;
}
int Mul(int x,int y){
    return x*y;
}
int Div(int x,int y){
    return x/y;
}

int main(){
    // int (*pf)(int x,int y); // 函数指针
    int (*arr[4])(int x,int y)={&Add,&Sub,&Mul,&Div};  // 存放函数指针的数组
    // 把 *arr[4] 拿出来，其他的构造就不是和函数指针一样。然后放回去，[] 的优先级不是比 * 高吗？所以不就是函数指针数组么
    int input;
do
{
    
    printf("%s","\n请选择：");
    printf("%s", "***1--> 加法 ********\n");
    printf("%s", "***2--> 减法 ********\n");
    printf("%s", "***3--> 乘法 ********\n");
    printf("%s", "***4--> 除法 ********\n");
    printf("%s", "***0--> 退出 ********\n");
    scanf("%d",&input);
    if (input == 0)
    {
        break;
    }
    

    else   if (input > 0 && input <=4)
    {
        int x, y,ret;
        printf("请输入两个数：\n");
        scanf("%d %d",&x,&y);
        ret = arr[input-1](x,y);
        printf("结果是：\n");
        printf("%d",ret);

    }

    else{
        printf("输入错误");
    }
    
}
while (1);//attention


    return 0;
}
