# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saguesse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 17:24:07 by saguesse          #+#    #+#              #
#    Updated: 2023/06/16 15:31:34 by saguesse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g3

RM = rm -f

HEADER_FILES = RPN.hpp \

SRCS_FILES = main.cpp \
			 RPN.cpp \

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
