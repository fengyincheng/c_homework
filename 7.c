// 1.输入3个整数，按小到大的顺序输出
//要求：不能建立数组存放数据，不能创建函数，要求普通变量作为printf函数的参数输出
#include <stdio.h>
int main(){
    int a, b, c;
    printf("请输入3个整数，以空格分隔：");
    scanf("%d %d %d", &a, &b, &c);
    if ( a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    if ( a > c){
        int temp = a;
        a = c;
        c = temp;
    }
    if ( b > c){
        int temp = b;
        b = c;
        c = temp;
    }
    printf("按从小到大的顺序输出：%d %d %d\n", a, b, c);
    return 0;
}











// 2.编程判断输入的一串字符是否为“回文”。
//所谓“回文”，就是顺读和倒读都一样的字符串。例如，“level”、“ABCCBA”都是回文。
#include <stdio.h>
#include <string.h>
int main() {
    char p[100];
    scanf("%s", p);
    char* start = p;
    char* last = p + strlen(p) -1;
    int is_huiwen = 1;
    for (; start < last; start++,last--){
        if( *start != *last){
            is_huiwen = 0;
            printf("不是回文数");
            break;

        }
    }

    if (is_huiwen == 1){
        printf("是回文数。");
    }
   
    

    return 0;
}









// 3.设计一个函数，实现返回n个元素的数值数组的和。在主程序内输入一个具体数组，调用函数来计算其和，其中：

// -函数参数列表为：指针参数input,整型参数n。

// -函数的返回值为整型数值。

// -主函数中定义数组int a[5]={-12,8,23,0,66};

int sum(int* arr[], int n){
    int result = 0;
    for (int i = 0;i <n;i++){
        result += *arr[i]; //注意这里要解引用
    }
    return result;

}

int main(){
    int a[5]={-12,8,23,0,66};
    int total = sum(a,5);
    printf("数组元素的和为：%d\n", total);
    return 0;
}








// 4.编写一个程序，实现以下功能：

// -创建整型数组int a[10] = {10,2,5,8,9,2,0,6,7,3};

// -新建函数sort，无返回值，参数为指针参数input，整型参数n，实现对输入数组元素从小到大的排序。

// -主函数调用sort函数（传递一个指向数组a的指针变量）并输出排序后的数组。
void sort(int* input,int n){
    for(int i =0;i<n;i++){
        for(int j = 0; j<n-1-i;j++){
            int temp = 0;
            if(*(input+j) > *(input+j+1)){
                temp =*(input+j);
                *(input+j) = *(input +j+1);
                *(input +j+1) = temp;
            }

        }
    }
}

int main(){
    int arr[10] = {10,2,5,8,9,2,0,6,7,3};
    sort(arr,10);
    return 0;
}









// 5.编写一个程序，实现以下功能：

// -主函数中创建字符数组ch[20],并提示用户输入一句话（少于20个字符）。

// -新建函数search，返回值为整型，参数为指针参数input。
//实现查找输入字符数组中数字字符的功能，在函数中输出找到的数字字符，
//并返回数字字符的总数。

// -主函数调用search函数（传递一个指向数组ch的指针变量）并输出数字字符的总数，
//若无，则输出“该字符串无数字字符”。
#include <stdio.h>
int search(char* input,int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if (*(input+i)>'0'&&*(input+i)<'9'){
            count++;
        }
    }
    return count;
}

int main(){
    char ch[20];
    printf("请输入一句话（少于20个字符）：");
    fgets(ch,20,stdin);
    int len = strlen(ch);
    int result = search(ch,len);
    printf("数字字符的总数为：%d\n", result);


    return 0;
}
