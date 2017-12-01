# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 15:25:02 by rmiralle          #+#    #+#              #
#    Updated: 2017/12/01 20:37:54 by rmiralle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_atoi.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memset.c\
		ft_putchar.c\
		ft_putchar_fd.c\
		ft_putendl.c\
		ft_putendl_fd.c\
		ft_putnbr.c\
		ft_putnbr_fd.c\
		ft_putstr.c\
		ft_putstr_fd.c\
		ft_strcat.c\
		ft_strncat.c\
		ft_strchr.c\
		ft_strclr.c\
		ft_strcmp.c\
		ft_strcpy.c\
		ft_strdup.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlen.c\
		ft_strmap.c\
		ft_strncmp.c\
		ft_strncpy.c\
		ft_strnew.c\
		ft_tolower.c\
		ft_toupper.c

OBJ = ${SRC:c=o}

all: $(NAME)

OBJ : $(OBJ)
	gcc -c -Wall -Wextra -Werror $(SRC)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

	@echo "\033[38;5;202m++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m++++++++++++++++++++++++++++++++++++++++++++++++///+++++++++++++++++++++++++++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m+++++++++++++++++++++++++++++++++++++++++++++/:.   .-/++++++++++++++++++++++++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m+++++++++++++++++++++++++++++++++++++++++/:-           -:/++++++++++++++++++++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m++++++++++++++++++++++++++++++++++++++/:.        .        .:/+++++++++++++++++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m++++++++++++++++++++++++++++++++++//-.        -:///:-        .-:/+++++++++++++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m+++++++++++++++++++++++++++++++/:-        .://+++++++//-.        .:/++++++++++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m+++++++++++++++++++++++++++//:.        -:/+++++++++++++++/:.        .-//++++++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m++++++++++++++++++++++++/:-            .-//+++++++++++++++++//-.        -:/+++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m++++++++++++++++++++//:.        .-.        -:/+++++++++++++++++//:.        .://+++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m+++++++++++++++++/:-.        -:/+++/:-        -:/++++++++++++++++++/:-.        -:/++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m++++++++++++++/:.        .-//+++++++++/:-.       .:/++++++++++++++++++//:.        .://++++++++++++++\033[0m"
	@echo "\033[38;5;202m++++++++++//-.        .:/++++++++++++++++//-        .-//++++++++++++++++++/:-        .-:/+++++++++++\033[0m"
	@echo "\033[38;5;202m++++++++/-        .-:/++++++++++++++++++//-.            -:/++++++++++++++++++//-.        -/+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:      .:/+++++++++++++++++++/:-        .-.        .://++++++++++++++++++/:.      -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    ./++++++++++++++++++//:.        -:/+++/:-        .-//++++++++++++++++++/-    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -++++++++++++++++/:-        .-//+++++++++//-.        -://+++++++++++++++-    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -++++++++++++//:.        -:/+++++++++++++++++/:-        .://++++++++++++-    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++:        .-//+++++++++++++++++++++++//-.        :+++++++++++-    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++.     .:/+++++++++++++++++++++++++++++++/:.     ./++++++++++-    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++.    :+++++++++++++++++++++++++++++++++++++/    ./++++++++++-    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++.    :+++++++++++++++++++++++++++++++++++++/    ./++++++++++-    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++.    :+++++++++++++++++++++++++++++++++++++/    ./++++++++++-    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++.    :+++++++++++++++++++++++++++++++++++++/    ./++++++++++-    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++     :+++++++++++++++++++++++++++++++++++++/    ./++++++++++-    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++     :+++++++++++++++++++++++++++++++++++++/    ./++++++++++-    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++     :+++++++++++++++++++++++++++++++++++++/    ./+++++++++/.    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++     :+++++++++++++++++++++++++++++++++++++/    ./+++++/:-       -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++     :+++++++++++++++++++++++++++++++++++++/    ./++/-.          -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++     :+++++++++++++++++++++++++++++++++++++/     :-        ..    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++     :+++++++++++++++++++++++++++++++++++++/            -:/+:    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++     .:/+++++++++++++++++++++++++++++++++/:.        .-//++++:    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++        .-//+++++++++++++++++++++++++//-.        -://+++++++:    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++            -:/+++++++++++++++++++/:.        .-//+++++++++++:    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++     -.        .:/++++++++++++//-.        .://++++++++++++++:    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:    -+++++++++++     /+/:-.        -:/+++++/:-         -:/++++++++++++++++++:    -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++:     -:/++++++++     /++++//:.        .:/-.        .-//++++++++++++++++++/:-     -+++++++++\033[0m"
	@echo "\033[38;5;202m++++++++/        .://++++     /++++++++/:-               .:/++++++++++++++++++//:.        :+++++++++\033[0m"
	@echo "\033[38;5;202m+++++++++//-.       .-:/+     /+++++++++++//-.       .-:/++++++++++++++++++//-.       .-:/++++++++++\033[0m"
	@echo "\033[38;5;202m+++++++++++++/:.        .     /+++++++++++++++/:. .://++++++++++++++++++/:-        .://+++++++++++++\033[0m"
	@echo "\033[38;5;202m++++++++++++++++/:-.          /++++++++++++++++++/++++++++++++++++++//:.        -:/+++++++++++++++++\033[0m"
	@echo "\033[38;5;202m+++++++++++++++++++//:.        -:/+++++++++++++++++++++++++++++++/:-        .-//++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m+++++++++++++++++++++++/:-        .://+++++++++++++++++++++++//:.        -:/++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m++++++++++++++++++++++++++//-.       .-:/+++++++++++++++++//-.       .-:/+++++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m++++++++++++++++++++++++++++++/:.        .://+++++++++//:-        .:/+++++++++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m+++++++++++++++++++++++++++++++++/:-        .-//+++//-.        -:/++++++++++++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m+++++++++++++++++++++++++++++++++++++/:.        -:-        .-/++++++++++++++++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m++++++++++++++++++++++++++++++++++++++++/:-             -:/+++++++++++++++++++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m++++++++++++++++++++++++++++++++++++++++++++/-.     .-/+++++++++++++++++++++++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m+++++++++++++++++++++++++++++++++++++++++++++++/:-:/++++++++++++++++++++++++++++++++++++++++++++++++\033[0m"
	@echo "\033[38;5;202m++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\033[0m"

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean all