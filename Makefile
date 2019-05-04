# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 12:19:12 by tebatsai          #+#    #+#              #
#    Updated: 2019/05/03 23:03:52 by tebatsai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

OBJECTS = *.o

all:$(NAME)

$(NAME): $(SRCS)
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar rcs $(NAME) $(OBJECTS)

clean: 
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
