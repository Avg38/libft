SRCS	=	\
			ft_fd/ft_putchar_fd.c \
			ft_fd/ft_putendl_fd.c \
			ft_fd/ft_putnbr_fd.c \
			ft_fd/ft_putstr_fd.c \
			\
			ft_list/ft_lstadd_back.c\
			ft_list/ft_lstadd_front.c\
			ft_list/ft_lstclear.c\
			ft_list/ft_lstdelone.c\
			ft_list/ft_lstiter.c\
			ft_list/ft_lstlast.c\
			ft_list/ft_lstmap.c\
			ft_list/ft_lstnew.c\
			ft_list/ft_lstsize.c\
			\
			ft_mem/ft_memset.c\
			ft_mem/ft_bzero.c\
			ft_mem/ft_calloc.c\
			ft_mem/ft_memchr.c\
			ft_mem/ft_memcmp.c\
			ft_mem/ft_memcpy.c\
			ft_mem/ft_memmove.c\
			\
			ft_others/ft_atoi.c\
			ft_others/ft_itoa.c\
			ft_others/ft_isprint.c\
			ft_others/ft_isdigit.c\
			ft_others/ft_isalnum.c\
			ft_others/ft_isalpha.c\
			ft_others/ft_isascii.c\
			\
			ft_str/ft_strjoin.c \
			ft_str/ft_strdup.c\
			ft_str/ft_tolower.c \
			ft_str/ft_strtrim.c \
			ft_str/ft_strlcat.c \
			ft_str/ft_substr.c \
			ft_str/ft_strlcpy.c \
			ft_str/ft_strlen.c\
			ft_str/ft_toupper.c \
			ft_str/ft_strmapi.c \
			ft_str/ft_split.c \
			ft_str/ft_strncmp.c \
			ft_str/ft_strchr.c\
			ft_str/ft_strnstr.c \
			ft_str/ft_strrchr.c \
			ft_str/ft_striteri.c \
			\
			ft_printf/ft_printf1.c\
			ft_printf/ft_printf2.c\
			\
			GNL/get_next_line.c\
			GNL/get_next_line_utils.c\

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -rf

%.o:	%.c libft.h ft_printf/ft_printf.h GNL/get_next_line.h
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		@ar rc ${NAME} ${OBJS}
		@mv ${OBJS} obj/

all : 		${NAME}

clean:
		${RM} obj/*.o

fclean:		clean
			${RM} ${NAME}
re:			fclean all
