# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 12:19:12 by tebatsai          #+#    #+#              #
#    Updated: 2019/05/01 20:09:33 by tebatsai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = *.c

OBJECTS = *.o

all:
	$(Name):
		@gcc -Wall -Wextra -Werror -c $(FILES)
		@ar rcs $(NAME) $(OBJECTS)

clear: 
	@/bin/rm -rf $(OBJECTS)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all
