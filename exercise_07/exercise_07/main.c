//
//  main.c
//  exercise_07
//
//  Created by 추서연 on 2023/10/19.
//


#include <stdio.h>
int all_files;
extern void sub(void);
int main(void)
{
    sub();
    printf("%d\n", all_files);
    return 0;
}
