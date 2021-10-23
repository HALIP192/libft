NAME =		libft.a

SRC =		\
			ft_atoi			\
			ft_bzero		\
			ft_calloc		\
			ft_isalnum		\
			ft_isalpha		\
			ft_isascii		\
			ft_isdigit		\
			ft_isprint		\
			ft_itoa			\
			ft_memchr		\
			ft_memcmp		\
			ft_memcpy		\
			ft_memmove		\
			ft_memset		\
			ft_putchar_fd	\
			ft_putendl_fd	\
			ft_putnbr_fd	\
			ft_putstr_fd	\
			ft_split		\
			ft_strchr		\
			ft_strdup		\
			ft_striteri		\
			ft_strjoin		\
			ft_strlcat		\
			ft_strlcpy		\
			ft_strlen		\
			ft_strmapi		\
			ft_strncmp		\
			ft_strnstr		\
			ft_strrchr		\
			ft_strtrim		\
			ft_substr		\
			ft_tolower		\
			ft_toupper

BONUS			=	ft_lstadd_back    \
                    ft_lstadd_front   \
                    ft_lstclear       \
					ft_lstdelone      \
                    ft_lstiter        \
                    ft_lstlast        \
					ft_lstmap         \
                    ft_lstnew         \
                    ft_lstsize_bonus
OBJS_DIR =	objects

.PHONY:		all clean fclean bonus re

OBJ =		${SRC:=.o}
OBJ_BONUS =	${BONUS:=.o}

CFLAGS =	-Wall -Wextra -Werror -g 
#-O3 -ffast-math
CC =		gcc

%.o: %.c		
	${CC} ${CFLAGS} -c $< -o $@

$(NAME):	 ${OBJ}
	ar cr ${NAME} ${OBJ}

all:    $(NAME)

bonus:	 ${OBJ_BONUS}
	ar cr ${NAME} ${OBJ_BONUS}

clean:
	rm -rf ${OBJ} ${OBJ_BONUS}

fclean: 	clean
	rm -rf ${NAME}

re:			\
			fclean	\
			all
