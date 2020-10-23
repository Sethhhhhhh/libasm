NAME = libasm.a

CC	 =	gcc

HEADER = includes/

MAIN =	srcs/main.c

EXE =	exe

SRCS = 	srcs/ft_strlen.s \
		srcs/ft_strcmp.s \
		srcs/ft_strcpy.s \
		srcs/ft_strdup.s \
		srcs/ft_read.s \
		srcs/ft_write.s \

OBJS = $(SRCS:.s=.o)

.s.o:
	@nasm -f elf64 -s $< -o $(<:.s=.o)

all: $(NAME)

$(NAME): $(OBJS)
		@ar rcs $@ $(OBJS)
		ranlib $(NAME)
		
test:	$(NAME)
		$(CC) $(MAIN) -no-pie -L ./ -lasm -o $(EXE)
		./$(EXE)
clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)
		rm $(EXE)
re:		fclean all
