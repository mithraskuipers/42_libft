NAME 		= libft.a
CFLAGS 		= -Wall -Werror -Wextra

DIR_SRC 	= ./srcs/
DIR_BONUS	= ./bonus/
DIR_OBJ		= ./obj/

DIR_INC		= ./inc/
HEADER		= ./inc/libft.h

RED			= \033[0;31m
GREEN		= \033[0;32m
YELLOW		= \033[0;33m
BLUE		= \033[0;34m
WHITE		= \033[0;37m

SRC = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

BONUS =	ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c

SRCS_wpath	= $(addprefix $(DIR_SRC), $(SRC))
BONUS_O 	= $(BONUS_wpath:.c=.o)
BONUS_wpath = $(addprefix $(DIR_BONUS), $(BONUS))
SRCS_O		= $(SRCS_wpath:.c=.o)

ifdef WITH_BONUS
	OBJ = $(SRCS_O) $(BONUS_O)
else
	OBJ = $(SRCS_O)
endif

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $@ $^
	@echo "\n$(YELLOW)Constructed static library\n$(WHITE)"

bonus:
	@$(MAKE) --no-print-directory WITH_BONUS=1 all

%.o: %.c $(HEADER)
	@echo "$(BLUE)Compiling $(GREEN)$<"
	@$(CC) -c -I $(DIR_INC) $(CFLAGS) $< -o $@

clean:
	@echo "\n$(RED)Removing all object files"
	@rm -f $(SRCS_O) $(BONUS_O)

fclean: clean
	@echo "$(RED)Removing static library $(NAME)\n"
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean