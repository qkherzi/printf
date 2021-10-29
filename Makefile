NAME = libftprintf.a
SRC = 				ft_write_arg.c \
							ft_write_hexa.c\
							ft_printf.c\
							
OBJ = ${SRC:.c=.o}
CC = gcc
RM = rm -rf
FLAGS = -Wall -Wextra -Werror

.c.o:
			${CC} ${FLAGS} -c $< -o $@

${NAME} : ${OBJ}
				${MAKE} all -C ./libft
				cp libft/libft.a ${NAME}
				ar rcs ${NAME} ${OBJ}
all: ${NAME}

clean:
			${MAKE} clean -C ./libft
			${RM} $(OBJ)

fclean: clean
			${MAKE} fclean -C ./libft
			${RM} $(NAME)

re: fclean ${NAME} 

.PHONY: all clean fclean e
