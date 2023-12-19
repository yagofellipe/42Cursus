#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int	main(int argc, char *argv[], char *envp[])
{
	char *args[5] = {"git", "commit", "-m", "teste commit sem aspas", NULL};
	if (execve("/usr/bin/git", args, envp) == -1)
		printf("deu ruim\n");
	return 0;


}

