NAME = libftprintf.a

SRC = aff_wchar_t.c \
	  check_conv.c \
	  check_flag.c \
	  ft_printf.c \
	  pfudor.c \
	  pfudor2.c \
	  print_c_low.c \
	  print_c_up.c \
	  print_d_low.c \
	  print_d_low_long.c \
	  print_d_low_long_long.c \
	  print_d_low_short.c \
	  print_d_low_signed_char.c \
	  print_d_low_intmax_t.c \
	  print_d_low_ssize_t.c \
	  print_d_up.c \
	  print_i_low.c \
	  print_o_low.c \
	  print_o_up.c \
	  print_p_low.c \
	  print_s_low.c \
	  print_s_up.c \
	  print_u_low.c \
	  print_u_up.c \
	  print_x_low.c \
	  print_x_low_long.c \
	  print_x_low_unitmax.c \
	  print_x_up.c \
	  print_x_up_long.c \
	  print_modulo.c \
	  write_space.c \
	  print_u_low_intmax_t.c \
	  print_u_low_long.c \
	  print_u_low_long_long.c \
	  print_u_low_size_t.c \


SRCDIR = ./srcs/

OBJ = $(SRC:.c=.o)

LIBSRC = bin_to_deci.c \
		 ft_atoi.c \
		 ft_bzero.c \
		 ft_excep_itoa.c \
		 ft_fill_word.c \
		 ft_isalnum.c \
		 ft_isalpha.c \
		 ft_lstdel.c \
		 ft_memcmp.c \
		 ft_putchar_fd.c \
		 ft_strcat.c \
		 ft_striter.c \
		 ft_strncmp.c \
		 ft_isascii.c \
		 ft_lstdelone.c \
		 ft_memcpy.c \
		 ft_putendl.c \
		 ft_strchr.c \
		 ft_striteri.c \
		 ft_strncpy.c \
		 ft_isdigit.c \
		 ft_lstiter.c \
		 ft_memdel.c \
		 ft_putendl_fd.c \
		 ft_strclr.c \
		 ft_strjoin.c \
		 ft_strnequ.c \
		 ft_isprint.c \
		 ft_lstmap.c \
		 ft_memdup.c \
		 ft_putnbr.c \
		 ft_strcmp.c \
		 ft_strlcat.c \
		 ft_strnew.c \
		 ft_itoa.c \
		 ft_itoa_long.c \
		 ft_lstnew.c \
		 ft_memmove.c \
		 ft_putnbr_fd.c \
		 ft_strcpy.c \
		 ft_strlen.c \
		 ft_strnstr.c \
		 ft_itoa_base.c \
		 ft_itoa_base_long.c \
		 ft_itoa_base_majuscule.c \
		 ft_itoa_base_majuscule_long.c \
		 ft_memalloc.c \
		 ft_memset.c \
		 ft_putstr.c \
		 ft_strdel.c \
		 ft_strmap.c \
		 ft_strrchr.c \
		 ft_len_split_word.c \
		 ft_memccpy.c \
		 ft_nb_words.c \
		 ft_putstr_fd.c \
		 ft_strdup.c \
		 ft_strmapi.c \
		 ft_strsplit.c \
		 ft_lstadd.c \
		 ft_memchr.c \
		 ft_putchar.c \
		 ft_recur_power.c \
		 ft_recur_power_long.c \
		 ft_strequ.c \
		 ft_strncat.c \
		 ft_strstr.c \
		 ft_strsub.c \
		 ft_strtrim.c \
		 ft_tolower.c \
		 ft_toupper.c \
		 ft_putshort.c \
		 ft_putsigned_char.c \
		 ft_putlong.c \
		 ft_putlong_long.c \
		 ft_putintmax_t.c \
		 ft_putssize_t.c \
		 ft_putunsigned_long.c \
		 ft_putunsigned_long_long.c \
		 ft_putsize_t.c \

LIBOBJ = $(LIBSRC:.c=.o)

LDFLAGS = -I./include/

CFLAGS = -Wall -Werror -Wextra

LIBDIR = ./Libft/
OBJDIR= ./objs/
SRCDIR= ./srcs/

SRCS= $(addprefix $(SRCDIR), $(SRC))
OBJS= $(addprefix $(OBJDIR), $(OBJ))

LIBS = libft/libft.a

RM = rm -f

all : $(NAME)

$(NAME) :
	@make -C libft/ re
	@echo "\t\033[33;32m'MAKE' ->\t\033[1;34m$(NAME)\033[0m :\tLibrary compilation in progress..."
	@gcc $(GCC_FLAGS) -Ilibft/ -Iincludes/ -c $(SRCS)
	@ar rc $(NAME) $(OBJ) $(addprefix $(LIBDIR), $(LIBOBJ))
	@ranlib $(NAME)
	@mkdir -p $(OBJDIR)
	@mv $(OBJ) $(OBJDIR)
	@ranlib $(NAME)
	@echo "\t\033[33;32m'MAKE' ->\t\033[1;34m$(NAME)\033[0m :\tLibrary compilation completed sucessfully !"

clean :
	@echo "\t\033[1;31m'CLEAN' ->\tDestruction\033[0m:\tfiles .o for the library \033[1;34m$(NAME)\033[0m"
	@rm -rf objs
	@echo "\t\033[1;31m'CLEAN' ->\tDestruction\033[0m:\tfiles .o for the library \033[1;34m$(NAME)\033[0m completed successfully !"
	@make -C libft/ clean

fclean : clean
	@$(RM) $(NAME)
	@echo "\t\033[1;31m'FCLEAN' ->\tDestruction\033[0m of library \033[1;34m$(NAME)\033[0m completed successfully !"
	@make -C libft/ fclean

re : fclean all

compile :
	@gcc $(CFLAGS) $(addprefix $(SRCDIR), $(SRC)) main.c libft/libft.a -g

cc:
	@gcc -o test $(addprefix $(SRCDIR), $(SRC)) main.c libft/libft.a -g

compexec : compile
	@./a.out

cexec : cc
	@./a.out

