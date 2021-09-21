# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/21 15:15:50 by isfernan          #+#    #+#              #
#    Updated: 2021/09/21 15:16:40 by isfernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		= main.cpp	span.cpp

OBJS 		= $(SRCS:.cpp=.o)

CXXFLAGS	= -Wall -Werror -Wextra

NAME		= Span

all:		$(NAME)

$(NAME):	$(OBJS)
			-@clang++ $(CXXFLAGS) -o $(NAME) $(OBJS) -std=c++98

clean:
			-@rm -f $(OBJS)

fclean: 	clean
			-@rm -f $(NAME)

re:			fclean all

.PHONY: all clea fclean re test