#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int is_sushu( int x) {

    
     int i;
     if (x < 2) return 0; // 小于2的数不是素数
     for (i = 2; i * i <= x; i++) {
         if (x % i == 0) return 0; // 找到因子，非素数
    }
    
    
    return 1; // 是素数

    return 0;
}   
int main() {
    int number;
    srand(time(0)); // 初始化随机数生成器
    
    int container[10];
    for ( int i = 0; i < 10; i++)
    {
        container[i] = rand() % 401 + 100; // 生成100到500之间的随机数;
    }
    for (int e = 0; e < 9; e++)
    {
        
    
    
        for (int z = 0,temp; z < 9 - e ; z++)
            {
                if (container[z] < container[z + 1])
                {
                    temp = container[z];
                    container[z] = container[z + 1];
                    container[z + 1] = temp;
                }
            
            }
    }   
    
    
    printf("排序后的数字是: ");
    for (int y = 0 ; y < 10 ; y++)
    {
        printf("%d",container[y]);
        printf("\n");
    }
    int found = 0;
    for (int i = 0; i < 10; i++)
    {
    if (is_sushu(container[i]))
    {
        printf(" 素数是%d\n",container[i]);
        found = 1;
        
    }
    
}    
if (!found) {
        printf("没有找到素数。\n");
    }
    return 0;
    

    
    
}

int main() {
    int table_1[3][3] = {
        {1, 3, 5},
        {2, 4, 6},
        {8, 2, 1}
    };
    int table_2[3][3] = {
        {2, 7, 0},
        {9, 3, 8},
        {5, 2, 6}
    };

    int result[3][3] = {0};
    int i;
    for (i = 0; i < 3; i++)
    {
        for ( int j = 0; j < 3; j++)
        {
            result[i][j] = table_1[i][j] + table_2[i][j];
            printf("%d ", result[i][j]);
        }
        
        
    }
    
}

// 3.手动输入一串字符（50个字符以内）储存到字符数组string1中，可包括大小写，标点符号等
// 输出字符串的有效长度，以及其全大写、全小写样式(需要创建新的字符数组string2来实现字符串的复制与变化)
// string1按规律翻译成密码后并输出窗口。规律：第i个字母变成第（26-i+1）个字母（如A->Z、b->y），非字母字符不改动
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char string1[51];
    char string2[51];
    char cipher[51];
    
    printf("请输入一串字符（50个字符以内）：");
    fgets(string1, sizeof(string1), stdin);  //存放位置（数组），存放个数，键盘输入
    
    // 去除换行符
    
    string1[strcspn(string1, "\n")] = '\0';
    int len = strlen(string1);  //string会数到结束符/0为止并给出长度
    printf("字符串的有效长度: %d\n", len);
   
    
    // 全大写
    for (int i = 0; i < len; i++) {
        string2[i] = toupper(string1[i]);  //toupper函数将小写字母转换为大写
    }
    string2[len] = '\0';  // 添加字符串结束符
    printf("全大写样式: %s\n", string2);
    
    // 全小写
    for (int i = 0; i < len; i++) {
        string2[i] = tolower(string1[i]);
    }
    string2[len] = '\0';  // 添加字符串结束符
    printf("全小写样式: %s\n", string2);
    
    // 翻译成密码
    for (int i = 0; i < len; i++) {
        char c = string1[i];

        if (c >= 'A' && c <= 'Z') {
            cipher[i] = 'Z' - (c - 'A');   // A→Z, B→Y ...
        }
        else if (c >= 'a' && c <= 'z') {
            cipher[i] = 'z' - (c - 'a');   // a→z, b→y ...
        }
        else {
            cipher[i] = c;  // 非字母不变
        }
    }
    cipher[len] = '\0';

    printf("密码字符串: %s\n", cipher);
    
    return 0;
}




int is_oushu(int x){
   int a = x/1000;
   int b = x/100%10;
   int c = x/10%10;
   int d = x%10;
   int result = 2;
   if ((a%2==0 && b%2==0 && c%2==0 && d%2==0))
   {
     result = 0;
   }
   
  return result;

    
    
}
int bubule_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // 交换 arr[j] 和 arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 0;
}





int main() {
    int all_number[51];   // 存储所有输入的四位数
    int is_oushu_number[51]; // 存储各位数字均为偶数的四位数
    int count_total = 0;  // 记录总共输入的四位数个数
    int count_oushu = 0;  // 记录各位数字均为偶数的四位数个数
    printf("请输入任意个四位数，以-1结束输入：\n");
    while (1)
    {
        int input;
        scanf("%d",&input);
        if (input == -1) {
            break;
        }
        if (input >= 1000 && input <= 9999)
        {
            all_number[count_total++] = input;
        }
        
        
        
    }

    for (int i = 0; i < count_total; i++)
    {
        if (is_oushu(all_number[i]) == 0)
        {
            is_oushu_number[count_oushu++] = all_number[i];
        }
        
    }
    printf("所有输入的四位数有：%d 个\n",count_total);
    printf("所有各位数字均为偶数的四位数有：%d 个\n",count_oushu);
    
    printf("排序后的各位数字均为偶数的四位数为：\n");
    bubule_sort(is_oushu_number,count_oushu);  //传入的是全是偶数的数组，此数组的个数
    for ( int i = 0; i < count_oushu; i++)
    {
        printf("%d\n",is_oushu_number[i]);
    }
    return 0;
    


}

