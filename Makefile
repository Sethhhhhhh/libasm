NAME = libasm.a

NASM = nasm

NASM_FLAGS = -f macho64

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HEADER = includes/libasm.h

MAIN = srcs/main.c

SRCS = srcs/ft_strlen.s \
		srcs/ft_strcmp.s \
		srcs/ft_strcpy.s \
		srcs/ft_strdup.s \
		srcs/ft_read.s \
		srcs/ft_write.s \

OBJS = $(SRCS:.s=.o)

PROG = libasm.out

$(NAME): $(OBJS) $(HEADER) $(MAIN)
		@ar rcs $(NAME) $(OBJS)
		
%.o: %.s
	@nasm -f macho64 $< -o $@

all: $(NAME)

test: $(MAIN) $(NAME)
		@$(CC) $(CFLAGS) -I $(HEADER) $(NAME) $(MAIN) -o $(PROG)
		./$(PROG)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)
		rm -rf $(PROG)

re: fclean all