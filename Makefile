NAME = libasm.a

FILES = ft_read.s ft_strcpy.s ft_strcmp.s ft_strdup.s ft_strlen.s ft_write.s

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(subst .s,.o,$(FILES)))

.s.o: $(SRCS)
		nasm -f macho64 $<

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean: 
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

test: re
	gcc test.c -L. -lasm
	./a.out

.PHONY: all clean fclean re