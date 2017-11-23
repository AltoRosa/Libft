# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 15:25:02 by rmiralle          #+#    #+#              #
#    Updated: 2017/11/17 12:35:33 by rmiralle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 

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