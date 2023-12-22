#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int	main()
{
	pid_t	pid;
		
	pid = fork();
	if (pid < 0)
	{
		fprintf(stderr, "Erro ao criar o processo filho\n");
        	return 1;	
	}
	else if (pid == 0)
	{
		printf("Eu sou o processo filho (PID: %d)\n", getpid());
        	char *args[] = {"git", "commit", "-m", "Mensagem do commit", NULL};
        	// Executa o comando git commit no processo filho
        	sleep(60);
        	if (execv("/usr/bin/git", args) == -1)
        	{
			perror("Erro ao executar o git commit");
			return 1;
		}
		
		printf("Processo filho encerrado.\n");
	}
	else
	{
		printf("Eu sou o processo pai (PID: %d) do processo filho (PID: %d)\n", getpid(), pid);
		wait(NULL);
		printf("Processo filho encerrado. Processo pai continua...\n");
	}
	return 0;
}
