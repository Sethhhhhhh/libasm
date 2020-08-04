NASM = nasm
NASM_FLAGS = -fmacho64
SRCS = srcs/ft_strlen.s \
		srcs/ft_strcmp.s \
		srcs/ft_strcpy.s \
		srcs/ft_strdup.s \
DIR_HEADERS = ./includes/

all: $(SRCS)%.s
	$(NASM) $(NASM_FLAGS) -I $(DIR_HEADERS) -s $< -o $@

