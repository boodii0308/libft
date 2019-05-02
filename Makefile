# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 12:19:12 by tebatsai          #+#    #+#              #
#    Updated: 2019/05/01 20:41:46 by tebatsai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

OBJECTS = *.o

all: $(NAME)

$(NAME): $(SRCS) libft.h 
	@gcc -Wall -Wextra -Werror -c $(SRCS)
	@ar rcs $(NAME) $(OBJECTS)

clean: 
	@/bin/rm -rf $(OBJECTS)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all
