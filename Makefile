
NAME = libftprintf.a

SRC = ft_printf.c ft_putchar.c ft_putnbr_base.c ft_putstr.c ft_putnbr_base2.c ft_putnbr.c

SRCOBJ = ${SRC:.c=.o}

INCLUDE = ft_printf.h  

CC = cc 

FLAGS = -Wall -Wextra -Werror



%.o : %.c
	${CC} ${FLAGS} -c $< -o $@

$(NAME) : ${SRCOBJ} ${INCLUDE}
	ar rcs ${NAME} ${SRCOBJ} 

all : $(NAME)

clean :
	rm -f ${SRCOBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
