/*
	создаёт копии самой себя и выводит идентификатор текущего и родительского процесса (видно, что идентификаторы меняются)
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
pid_t pid = fork();
if (pid == 0)
{
printf("New parent pid=%d, Parent pid=%d\n", (int)getpid(), (int)getppid());
}
else
{
printf("Parent pid=%d, Child pid=%d\n",(int)getpid(), (int)pid);
}
return 0;
}
