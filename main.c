#include<reg52.h> // AT89C52特定头文件

void delay(int time) // 延迟函数，单位为毫秒
{
    int i, j;
    for(i = time; i > 0; i--)
        for(j = 110; j > 0; j--);
}

void main()
{
    while(1)
    {
        P1 = 0x00; // LEDB灭
        delay(1000); // 灭1秒
        P1 = 0xFF; // LEDB亮
        delay(1500); // 亮1.5秒
    }
}