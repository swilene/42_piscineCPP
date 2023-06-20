# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saguesse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 17:24:07 by saguesse          #+#    #+#              #
#    Updated: 2023/06/20 17:51:02 by saguesse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g3

RM = rm -f

HEADER_FILES = PmergeMe.hpp \
			   Vectors.hpp \

SRCS_FILES = main.cpp \
			 PmergeMe.cpp \
			 Vectors.cpp \

OBJS = $(SRCS_FILES:.cpp=.o)

%.o : %.cpp $(HEADER_FILES)
	$(CXX) -c $(CXXFLAGS) $< -o $@

$(NAME): $(OBJS) $(HEADER_FILES)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean
	make all

.PHONY: all clean fclean re
