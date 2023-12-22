#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int fd[2]; // Declaração do pipe
    if (pipe(fd) == -1) {
        perror("Erro ao criar o pipe");
        return 1;
    }

    pid_t pid;
    pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Erro ao criar o processo filho\n");
        return 1;
    } else if (pid == 0) {
        printf("Eu sou o processo filho (PID: %d)\n", getpid());

        // Fecha a escrita no descritor do pipe
        close(fd[0]);
        // Redireciona a saída padrão para o descritor de escrita do pipe
        dup2(fd[1], STDOUT_FILENO);

        // Executa o comando ls
        if (execlp("ls", "ls", NULL) == -1) {
            perror("Erro ao executar o comando ls");
            return 1;
        }
    } else {
        printf("Eu sou o processo pai (PID: %d) do processo filho (PID: %d)\n", getpid(), pid);

        // Fecha a leitura no descritor do pipe
        close(fd[1]);
        
        // Redireciona a leitura do pipe para a entrada padrão
        dup2(fd[0], STDIN_FILENO);

        // Lê e imprime o resultado do comando ls vindo do pipe
        char buffer[100];
        ssize_t bytes_read;
        while ((bytes_read = read(STDIN_FILENO, buffer, sizeof(buffer))) != 0) {
            write(STDOUT_FILENO, buffer, bytes_read);
        }

        wait(NULL);
        printf("Processo filho encerrado. Processo pai continua...\n");
    }
    return 0;
}

