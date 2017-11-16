# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 15:25:02 by rmiralle          #+#    #+#              #
#    Updated: 2017/11/16 20:10:20 by rmiralle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =  ft_isalnum.c\
		ft_isalpha.c

OBJ = ${SRC:c=o}

all: $(NAME)

OBJ : $(OBJ)
	gcc -c $(SRC)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean: 
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean
	all