# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chustei <chustei@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 12:30:43 by chustei           #+#    #+#              #
#    Updated: 2022/12/28 12:02:19 by chustei          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_find_type.c ft_intlen.c ft_long_itoa.c   \
      ft_putchar.c ft_puthex.c ft_putnbr.c ft_putnbr.c   \
      ft_putptr.c ft_putstr.c ft_putstrrev.c \

OBJS = ${SRC:.c=.o}

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar -rcs

NAME              = libftprintf.a
DIRLIBFT          = ./libft/
NAMELIBFT         = libft.a
LIBFT = $(DIRLIBFT)$(NAMELIBFT)

$(NAME) :       $(OBJS)
		cd $(DIRLIBFT) && $(MAKE)
		cp libft/libft.a $(NAME)
		$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
		cd $(DIRLIBFT) && $(MAKE) clean
		$(RM) $(OBJS)

main: $(NAME)
		${CC} main.c -L. ${NAME}

fclean: clean
		$(MAKE) fclean -C ./libft
		cd $(DIRLIBFT) && $(MAKE) fclean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re $(NAME)
