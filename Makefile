# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tebatsai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 12:19:12 by tebatsai          #+#    #+#              #
#    Updated: 2019/05/01 19:53:31 by tebatsai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PREFIX = ft

NAME = libft.a

SRCS = srcs

OBJECTS = $(PREFIX)_*.o

INC = include

all: $(NAME)

$(Name):
	@gcc -Wall -Wextra -Werror -c $(SRCS)/$(PREFIX)_*.c -I$(INC)
	@ar rcs $(NAME) $(OBJECTS)

clear: 
	@/bin/rm -rf $(OBJECTS)

fclean : clean
	@/bin/rm -rf $(NAME)

re : fclean all
