/*
	выводит идентификатор текущего и родительского процесса
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main ()
{
        pid_t pid, ppid;

        pid = getpid ();
        ppid = getppid ();

        printf ("текущий процесс: %d\n", pid);
        printf ("родительский процесс: %d\n", ppid);

        return 0;
}