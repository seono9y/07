//
//  main.c
//  exercise_07
//
//  Created by 추서연 on 2023/10/19.
//

#include <stdio.h>

int inc(int counter);
int main(void)
{
    int i=10;
    printf("함수 호출전 i=%d\n:", i);
    i=inc(i);
    printf("함수 호출후 i=%d\n", i);
    return 0;
}
int inc(int counter)
{
    counter++;
    return counter;
}
