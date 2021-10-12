NAME = libft.a
CC = gcc
CFLAGS = -c -I

SRC_DIR = ./src
OBJ_DIR = ./obj
INC_DIR = ./include

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

.PHONY: all clean fclean re

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p obj
	$(CC) -g $(CFLAGS) $(INC_DIR) -o $@ $<

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

# -c: Do not run the linker.
# -I: Include directory of header files.
# $(subst from,to,text): Performs a textual replacement on the text text: each occurrence of from is replaced by to.