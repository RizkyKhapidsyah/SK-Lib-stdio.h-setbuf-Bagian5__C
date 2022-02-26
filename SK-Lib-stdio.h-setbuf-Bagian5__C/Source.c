#pragma warning(disable:4996)

#include <stdio.h>

#include <thread>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    setbuf(stdout, NULL); // unbuffered stdout
    putchar('a'); // 'a' appears immediately if stdout is unbuffered
    thrd_sleep(&(struct timespec) { .tv_sec = 1 }, NULL); // sleep 1 sec
    putchar('b');

    _getch();
    return 0;
}