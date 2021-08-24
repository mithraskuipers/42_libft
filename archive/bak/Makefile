# 'make' creates .o files for each function as well as the main library file, libft.a
# 'make re' removes all .o & .a files then remakes them
# 'make clean' removes the .o files used to create the library
# 'make fclean' removes the .o & .a files used to create the library

# The $@ and $< are called automatic variables. The variable $@ represents the name of the
# target and $< represents the first prerequisite required to create the output file. 

# SET UP
NAME		=	libft.a
CCFLAGS		=	-Wall -Wextra -Werror
SRC_O		=	$(SRC:.c=.o)
SRC_bonus_O	=	$(SRC_bonus:.c=.o)

# COLOR SETS
COLOR_WHITE	=	\e[39m
COLOR_RED	=	\e[31m
COLOR_GREEN	=	\e[32m

SRC = ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memccpy.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \
ft_strlen.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_strchr.c \
ft_strrchr.c \
ft_strnstr.c \
ft_strncmp.c \
ft_atoi.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_toupper.c \
ft_tolower.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_split.c \
ft_strmapi.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \

#onder ft_split.c
#ft_itoa.c \
#boven ft_strmapi.c

#onder ft_substr.c
#ft_strjoin.c \
#ft_strtrim.c \
#boven ft_split.c

#SRC_bonus = ft_lstnew.c \
#ft_lstadd_front.c \
#ft_lstsize.c \
#ft_lstlast.c \
#ft_lstadd_back.c \
#ft_lstdelone.c \
#ft_lstclear.c \
#ft_lstiter.c \
#ft_lstmap.c

%.o: %.c
	@echo "$(COLOR_RED)Compiling: $(COLOR_GREEN)$<$(COLOR_WHITE)"
	@gcc $(CCFLAGS) -c -o $@ $<

$(NAME): $(SRC_O)
	@echo "Combine object files to create archive libft.a"
	@ar rc $(NAME) $(SRC_O)
	
bonus: $(NAME) $(SRC_bonus_O)
	@echo "Adding libft bonus functions to $<"
	@ar rc $(NAME) $(SRC_bonus_O)

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	@echo "Removing all object (.o) files"
	@rm -f $(SRC_O) $(SRC_bonus_O)

.PHONY: fclean
fclean: clean
	@echo "Removing $(NAME)"
	@rm -f $(NAME)

.PHONY: re
re: fclean all

.PHONY: all clean fclean re
