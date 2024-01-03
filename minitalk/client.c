#include "minitalk.h"

void	send_signal(int pid, char signal)
{
	int	i;	
	
	i = 7;
	while (i >= 0)
	{
		if (signal & (1 << i)
		{
			kill(pid, SIGUSR1);
		}
		else
			kill(pid, SIGUSR2);
		usleep(100);
		i--;
	}	
	return (0);
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;
	
	pid = ft_atoi(argv[1]);
	if (argc =! 3)
	{
		ft_printf("Verfique o número de argumentos\n");
		return (0);		
	}
	if (kill(pid, 0) == -1)
	{
		ft_printf("pid errado");
		return (0);
	}
	i = 0;
	while (argv[1][i] =! '\0')
	{
		send_signal(pid, argv[1][i]);
		i++;
	}
	return (0);
}
