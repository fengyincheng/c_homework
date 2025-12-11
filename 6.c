

#include <stdio.h>
int count(int one,int two,int three){
    return one + two + three;
}
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int total = count(a,b,c);
    printf("%d\n", total);
    return 0;
}


void bubule_sort(int arr[],int n){
    for ( int i = 0; i < n-1; i++)
    {
        for ( int j = 0; j <n -1-i;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}


int main(){
    int arr1[15]={151,-6752,774,63,-8,231,63,-3,0,245,110,-12,886,34,-456};
    int arr2[10]={8,2,55,64,256,-9,63,90,-1,32};
    int arr3[5]={-80,0,25,101,3};
    bubule_sort(arr1,15);
    bubule_sort(arr2,10);
    bubule_sort(arr3,5);
    for (int i = 0; i < 15; i++)
    {
        printf("%d \n", arr1[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", arr2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", arr3[i]);
    }
    

    
    return 0;
}

/*
                     j=0     j=1     j=2
                ┌────────┬────────┬────────┐
i=0  张三       │ 80     │ 99     │ 20     │
                │score[0][0] score[0][1] score[0][2]
                ├────────┼────────┼────────┤
i=1  李四       │ 89     │ 76     │ 95     │
                │score[1][0] score[1][1] score[1][2]
                ├────────┼────────┼────────┤
i=2  王五       │ 60     │ 50     │ 96     │
                │score[2][0] score[2][1] score[2][2]
                └────────┴────────┴────────┘
*/

void stu_average(char name[][5], int sorce[][3], int n) {
    // 外层循环：逐个学生处理
    for (int i = 0; i < n; i++) {
        int total = 0; // 该学生的总分累加器，先清零
        // 内层循环：遍历该学生的三门课成绩
        for (int j = 0; j < 3; j++) {
            total += sorce[i][j]; //先行后列，always,求谁平均谁做外循环
        }
        float average = total / 3.0f; // 计算学生平均分
        printf("%s的平均成绩是%.2f\n", name[i], average);
    }
}

// 科目平均分：按科目汇总
void subject_average(char subject[][5], int score[][3], int n) {
    // 外层循环：逐个科目处理
    for (int j = 0; j < n; j++) {
        int total = 0; // 该科目的总分累加器，先清零
        // 内层循环：遍历所有学生在该科目的成绩
        for (int i = 0; 1 < 3; i++) {
            total += score[i][j]; 
        float average = total / 3.0f; // 计算科目平均分
        }
    }
}



int main(){
    char stu_name[][5]={
        "张三","李四","王五",
    };
    //stu_name[0]=>"张三",stu_name[1]=>"李四",stu_name[2]=>"王五"
    char subject[][5]={
        "语文","数学","英语",
    };
    
    int sorce[3][3]={
        {80,99,20},
        {89,76,95},
        {60,50,96},
    };
    //sorce[0]=>张三的成绩，sorce[0][0]=>张三语文成绩，sorce[0][1]=>张三数学成绩，sorce[0][2]=>张三英语成绩


    return 0;
}




int binary_search(int arr[], int left, int right, int target) {
    //arr[]退化成数组首元素的地址，left-->数组首元素的下标，right-->数组末尾元素的下标
    //target-->要查找的目标元素
    if (left > right)
    {
        return -1; // 未找到目标元素
    }
    int mid = (left + right) / 2;
    if (arr[mid] == target) 
    {
        return mid; //找到了
    }

    if (arr[mid] > target)
    {
        //在左边继续查找，调用自己，实现递归
        return binary_search(arr,left,mid-1,target);
        //right -->mid - 1;
    }
    else
    {   //在右边继续查找,调用自己，实现递归
        return binary_search(arr,mid +1,right,target);
        //left --> mid + 1;
    }
}


int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printf("请输入要查找的数字：");
    int target;
    scanf("%d", &target);
    int index = binary_search(arr,0,9,target);
    if (index == -1)
    {
        printf("没找到\n");
    }
    else
    {
        printf("找到了，位置在%d\n", index);
    }
}


int reverse_string(char str[]) {
    if (str[0] = '\0')
    {
        return;
    }
    reverse_string(str + 1);  //指针后移
    printf("%c", str[0]);
    //使用递归和指针实现输出反转的字符串
}

int reverse_string_2(char str[]) {
    int len = 0;
    len = strlen(str);
    for (int  i = len - 1; i >= 0; i--)

    {
        printf("%c", str[i]);
        
    }
    
}


#include <stdio.h>

void josephus(int n, int m, int s) {
    int alive[1000];     // 标记每个人是否还在圈里：1=在，0=已出圈
    int result[1000];    // 存放出圈顺序
    int count_alive = n; // 剩余人数
    int count = 0;       // 报数计数
    int index;           // 当前报数位置
    int out_index = 0;   // 已出圈人数，用于写 result[]

    // 初始化 alive 数组，全员在圈内
    for (int i = 0; i < n; i++) {
        alive[i] = 1;
    }

    // 第 s 个人开始 → 数组下标 = s - 1
    index = s - 1;

    while (count_alive > 0) {
        if (alive[index] == 1) {  // 此人还在圈中
            count++;              // 他可以报数
            if (count == m) {     // 报数到 m，出圈
                alive[index] = 0;
                count_alive--;
                result[out_index++] = index + 1;  // 转回编号（1~n）
                count = 0;        // 下一轮从 1 开始报数
            }
        }

        // 报数指针向后移动一位（循环）
        index = (index + 1) % n;
    }

    // 输出，每10个换一行
    printf("出圈顺序如下：\n");
    for (int i = 0; i < n; i++) {
        printf("%4d", result[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}

int main() {
    int n, m, s;

    printf("输入总人数 n：");
    scanf("%d", &n);

    printf("输入报数上限 m：");
    scanf("%d", &m);

    printf("输入开始报数的人 s：");
    scanf("%d", &s);

    josephus(n, m, s);

    return 0;
}
