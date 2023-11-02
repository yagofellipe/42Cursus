NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFTDIR = ./libft

SRCS = 	ft_printf.c \
		ft_p.c \
		ft_u.c \
		ft_s.c \
		ft_d.c \
		ft_c.c \
		ft_x.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -r $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	
	
fclean: clean
	@rm -f $(NAME)
	
re: fclean all
