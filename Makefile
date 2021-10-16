NAME = libft.a
LIBFT = libft.h
FLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memset.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strrchr.c \
	  ft_strnstr.c \
	  ft_strncmp.c \
	  ft_strdup.c \
	  ft_calloc.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_memmove.c \
	  ft_strcpy.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \

SRCSBONUS = ft_lstnew_bonus.c \
	  ft_lstsize_bonus.c \
	  ft_lstlast_bonus.c \
	  ft_lstadd_back_bonus.c \
	  ft_lstadd_front_bonus.c \
	  ft_lstdelone_bonus.c \
	  ft_lstclear_bonus.c \
	  ft_lstiter_bonus.c \
	  ft_lstmap_bonus.c \

OBJS = $(SRCS:.c=.o)

OBJSBONUS = $(SRCSBONUS:.c=.o)

PARALLEL ?= -j

.PHONY: all clean fclean re bonus

all:	#$(NAME)
		$(MAKE) $(PARALLEL) $(NAME)

$(NAME): $(OBJS) $(LIBFT)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

bonus:	$(OBJSBONUS)
		ar rc $(NAME) $(OBJSBONUS)
		@ranlib $(NAME)

%.o: %.c $(LIBFT)
		clang $(FLAGS) -c $< -o $@ -I $(LIBFT)

clean:
		@/bin/rm -f $(OBJS) $(OBJSBONUS)

fclean:	clean
		@/bin/rm -f $(NAME)

re:		fclean all
