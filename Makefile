CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
OBJDIR = src/
OBJ = $(OBJDIR)ft_printf.o\
	$(OBJDIR)ft_putchar_f.o\
	$(OBJDIR)ft_putstr_f.o\
	$(OBJDIR)ft_puthexa_f.o\
	$(OBJDIR)ft_putnbr_f.o\

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) $< -c -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
