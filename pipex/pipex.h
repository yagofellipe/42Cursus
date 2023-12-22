

#ifndef PIPEX_H
# define PIPEX_H


typedef struct s_cmd
{
	char	*cmd;
	char	**path;
	char	*args[100];
	int		f;
}	t_cmd;



#endif
