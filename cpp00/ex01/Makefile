# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saguesse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 17:24:07 by saguesse          #+#    #+#              #
#    Updated: 2023/05/08 18:21:11 by saguesse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f

INCLUDE_FILES = Contact.hpp \
				PhoneBook.hpp \

SRC_FILES = main.cpp \
			Contact.cpp \
			PhoneBook.cpp \

OBJ = $(SRC_FILES:.cpp=.o)

%.o : %.c $(INCLUDE_FILES)
	$(CXX) $(CXXFLAGS) -c $< -o

$(NAME): $(OBJ) $(INCLUDE_FILES)
	$(CXX) $(OBJ) -o $(NAME) $(INCLUDE_FILES)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean
	make all

.PHONY: all clean fclean re
