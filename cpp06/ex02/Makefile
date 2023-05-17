# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saguesse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 17:24:07 by saguesse          #+#    #+#              #
#    Updated: 2023/05/17 11:22:19 by saguesse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = base

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -f

HEADER_FILES = Base.hpp \
			   A.hpp \
			   B.hpp \
			   C.hpp \

SRCS_FILES = main.cpp \
			 Base.cpp \
			 A.cpp \
			 B.cpp \
			 C.cpp \

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