//
//  main.c
//  exercise_07
//
//  Created by 추서연 on 2023/10/19.
//

#include <stdio.h>

void f(void);

int i;
int main(void)
{

    for ( i=0; i<5; i++ )
    {
        f();
    }
    return 0;
}
void f(void)
{
    for ( i=0; i<10; i++)
        printf("#");
}
