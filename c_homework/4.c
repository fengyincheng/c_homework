/*
从键盘上输入一个任意正整数，编程判断该数是否为回文数。
所谓回文数就是从左到右读这个数与从右到左读这个数是一样的。
例如，12321、4004都是回文数.
*/
#include <stdio.h>
int main() {
    
    int orig_number,reverse_number = 0,x,digit;
    printf("请输入一个正整数：");
    scanf("%d",&orig_number);
    x=orig_number;  // 保存原始数字以便后续比较`
    while (reverse_number != 0)
    {
        digit = x %10;  //得到各个位数数字，因为reverse_number的值会随着循环变化，digit会先去个位，直道随着循环取到最后一位       
        x = x /10;
        reverse_number = reverse_number *10 + digit;//反转是一个近位的过程，比如123变成321，先取3，rever=0*10+3=3，再取2，rever=3*10+2=32，最后取1，rever=32*10+1=321
    }
    
    


    if (orig_number == reverse_number) {
        printf("%d 是回文数。\n", orig_number);
    } else {
        printf("%d 不是回文数。\n", orig_number);
    }

    return 0;
}


// 猜数游戏：编程先由计算机“想”一个1~100的数请人猜
// 如果猜对了，在屏幕上输出用户猜了多少次才猜对此数，
// 以此来反映猜数者“猜”的水平则游戏结束；
// 否则计算机给出提示，告诉用户所猜的数是太大还是太小，
// 最多可以猜10次，如果猜了10次仍未猜中的话，则停止本次猜数，然后继续猜下一个数。
// 每次运行程序可以反复猜多个数，直到操作者想停止时才结束。
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int number, guess, attempts;
    char choice;

    srand(time(0)); // 初始化随机数生成器

    do {
        number = rand() % 100 + 1; // 生成1到100之间的随机数
        attempts = 0;
        printf("我已经想好了一个1到100之间的数，你来猜吧！\n");

        while (attempts < 10) {
            printf("请输入你的猜测：");
            scanf("%d", &guess);
            attempts++;

            if (guess < number) {
                printf("太小了！\n");
            } else if (guess > number) {
                printf("太大了！\n");
            } else {
                printf("恭喜你，猜对了！你总共猜了 %d 次。\n", attempts);
                break;
            }
        }

        if (attempts == 10) {
            printf("很遗憾，你没有在10次内猜中。正确的数字是 %d。\n", number);
        }

        printf("你想再玩一次吗？(y/n)：");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("游戏结束，谢谢参与！\n");
    return 0;
}



// 3.公鸡5块/只，母鸡3块/只，小鸡1块3只，现在用100块买100只鸡，
// 请输出所有满足条件的买法。
// 
#include <stdio.h>
int main() {
    int roosters, hens, chicks;
    printf("公鸡、母鸡、小鸡的买法如下：\n");
    for (roosters = 0; roosters <= 20; roosters++){
        for (hens = 0; hens <= 33; hens++)
        {
            int chicks = 100 - roosters - hens;
            if (hens*3 + roosters*5 + chicks == 100 )
            {
                printf("公鸡：%d只，母鸡：%d只，小鸡：%d只\n", roosters, hens, chicks);
            }
            

        }
        
    }
  
    return 0;
}




// 4.猴子吃桃：猴子第一天摘下若干个桃子，吃了一半加两个，
// 第二天一样吃了剩下的一半加两个，一直到第10天只剩下一个桃子，
// 请问第一天共摘了多少个桃子。
#include <stdio.h>
int main() {
    int peaches = 1,day =10;
    while (day !=1)
    {
        peaches = (peaches +2)*2;
        day--;}
    printf("第一天共摘了%d个桃子。\n",peaches);
    return 0;
    
}


