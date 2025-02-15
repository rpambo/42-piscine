# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpambo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 12:27:37 by rpambo            #+#    #+#              #
#    Updated: 2024/10/11 12:59:07 by rpambo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS =  -Wall -Wextra -Werror -std=c++98 -fsanitize=address -pedantic
NAME = zombie
RM = rm

SRCS = main.cpp zombieHorde.cpp Zombie.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
fclean:
	$(RM) $(NAME)

re: clean all
