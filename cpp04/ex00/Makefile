# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saguesse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 17:24:07 by saguesse          #+#    #+#              #
#    Updated: 2023/04/24 11:01:44 by saguesse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animals
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f

SRC_FILES = main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp

INCLUDE_FILES = Animal.hpp \
				Dog.hpp \
				Cat.hpp \
				WrongAnimal.hpp \
				WrongCat.hpp

OBJ = $(SRC_FILES:.cpp=.o)

$(NAME): $(OBJ) $(INCLUDE_FILES)
	$(CXX) $(OBJ) -o $(NAME) $(INCLUDE_FILES)

%.o : %.c $(INCLUDE_FILES)
	$(CXX) $(CXXFLAGS) -c $< -o

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean
	make all

.PHONY: all clean fclean re
