# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 15:25:02 by rmiralle          #+#    #+#              #
#    Updated: 2017/11/15 14:16:20 by rmiralle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	

OBJ =	${SRC:c=o}

all: $(NAME)

$(NAME) :
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean: 
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean
	all