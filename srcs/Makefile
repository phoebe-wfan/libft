SRCS	= srcs/ft_isalpha.c srcs/ft_isdigit srcs/ft_isalnum srcs/ft_isascii srcs/ft_isprint srcs/ft_strlen srcs/ft_memset srcs/ft_bzero srcs/ft_memcpy srcs/ft_memmove srcs/ft_strlcpy srcs/ft_strlcat srcs/ft_toupper srcs/ft_tolower srcs/ft_strchr srcs/ft_strrchr srcs/ft_strncmp srcs/ft_memchr srcs/ft_memcmp srcs/ft_strnstr srcs/ft_atoi
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= libft.a
LIBC	= ar rc
LIBR	= ranlib
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all
