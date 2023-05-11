# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saguesse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 17:24:07 by saguesse          #+#    #+#              #
#    Updated: 2023/05/11 14:46:15 by saguesse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -f

HEADER_FILES = Bureaucrat.hpp \
			   Form.hpp \
			   PresidentialPardonForm.hpp \
			   RobotomyRequestForm.hpp \
			   ShrubberyCreationForm.hpp \
			   Intern.hpp \

SRCS_FILES = main.cpp \
			 Bureaucrat.cpp \
			 Form.cpp \
			 PresidentialPardonForm.cpp \
			 RobotomyRequestForm.cpp \
			 ShrubberyCreationForm.cpp \
			 Intern.cpp \

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
