/*
	реализация программы их пункта 2 с помощью создания процесса с новым кодом (вызов exec)
	Чтобы работала эта программа, должна быть скомпилирована программа "2.c"
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{

    execvp("./2", NULL);

    return 0;
}