# 'make' creates .o files for each function as well as the main library file, libft.a
# 'make re' removes all .o & .a files then remakes them
# 'make clean' removes the .o files used to create the library
# 'make fclean' removes the .o & .a files used to create the library

# The $@ and $< are called automatic variables. The variable $@ represents the name of the
# target and $< represents the first prerequisite required to create the output file. 

# SET UP
NAME		=	libft.a
CCFLAGS	=	-Wall -Wextra -Werror
SRC_O		=	$(SRC:.c=.o)
SRC_bonus_O	=	$(SRC_bonus:.c=.o)

# COLOR SETS
COLOR_WHITE	=	\e[39m
COLOR_RED	=	\e[31m
COLOR_GREEN	=	\e[32m

SRC := $(wildcard *.c)

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
	@echo "Combining object files to create archive libft.a"
	@ar rc $(NAME) $(SRC_O)
	@echo "Check"
	
bonus: $(NAME) $(SRC_bonus_O)
	@echo "Adding libft bonus functions to $<"
	@ar rc $(NAME) $(SRC_bonus_O)
	@echo "Check"

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	@echo "Removing all object (.o) files"
	@rm -f $(SRC_O) $(SRC_bonus_O)
	@echo "Check"

.PHONY: fclean
fclean: clean
	@echo "Removing $(NAME)"
	@rm -f $(NAME)
	@echo "Check"

.PHONY: re
re: fclean all

.PHONY: all clean fclean re
