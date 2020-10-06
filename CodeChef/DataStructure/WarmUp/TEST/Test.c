#include <stdio.h>

int main(void)
{
    int inputlist[100];

    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &inputlist[i]);
        if (inputlist[i] == 42)
        {
            break;
        }
        printf("%d\n", inputlist[i]);
    }
    
    return 0;
}