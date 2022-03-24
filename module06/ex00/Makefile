# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 19:22:29 by lraffin           #+#    #+#              #
#    Updated: 2022/03/24 02:47:54 by lraffin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

SRC =				\
 	Conversion.cpp	\
	main.cpp		\

HOST = $(shell hostname)
ifeq ($(HOST),macbook)
	CXX = c++-11
else
	CXX = c++
endif
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic #$(DEBUG)
DEBUG = -g3 -fsanitize=address

S = src
I = inc
B = .build
O = $(SRC:%.cpp=$(B)/%.o)
D = $(SRC:%.cpp=$(B)/%.d)

all: $(NAME)

$(NAME): $(O)
	@$(CXX) $(CXXFLAGS) $^ -o $@
	@echo "$(DONE) $@"

$(B):
	@mkdir $@

-include $(D)

$(B)/%.o: $(S)/%.cpp | $(B)
	@echo "$(COMPILE)$(NOC) $*.cpp"
	@$(CXX) $(CXXFLAGS) -MMD -MP $(I:%=-I %) -c $< -o $@

clean:
	@echo "$(INFO) deleting $(B)"
	@rm -rf $(B)

fclean: clean
	@echo "$(INFO) deleting $(NAME)"
	@rm -f $(NAME)

re: fclean all

test: error char int float double

error: $(NAME)
		@echo "*** $(B_GREEN)ERROR$(NOC) ***\n"
		./$<
		@echo "\n"
		./$< 1 2 53.0f
		@echo "\n"
		./$< 153.wer0f
		@echo "\n"

char: $(NAME)
		@echo "\n*** $(B_GREEN)CHAR$(NOC) ***\n"
		./$< 'c'
		@echo "\n"
		./$< 'a'
		@echo "\n"
		./$< Z
		@echo "\n"
		./$< bonjour
		@echo "\n"

int: $(NAME)
		@echo "\n*** $(B_GREEN)INT$(NOC) ***\n"
		./$< 0
		@echo "\n"
		./$< -42
		@echo "\n"
		./$< 42
		@echo "\n"
		./$< 2147483647
		@echo "\n"
		./$< -2147483648
		@echo "\n"
		./$< 2147483648
		@echo "\n"

float: $(NAME)
		@echo "\n*** $(B_GREEN)FLOAT$(NOC) ***\n"
		./$< 0.0f
		@echo "\n"
		./$< -4.2f
		@echo "\n"
		./$< 186.492f
		@echo "\n"
		./$< 3.40282e+38
		@echo "\n"
		./$< 3.9e+38
		@echo "\n"
		./$< -inff
		@echo "\n"
		./$< +inff
		@echo "\n"
		./$< nanf
		@echo "\n"

double: $(NAME)
		@echo "\n*** $(B_GREEN)DOUBLE$(NOC) ***\n"
		./$< 0.0
		@echo "\n"
		./$< 53.0
		@echo "\n"
		./$< 9178.1320
		@echo "\n"
		./$< 1.79769e+308
		@echo "\n"
		./$< 2e+308
		@echo "\n"
		./$< -inf
		@echo "\n"
		./$< +inf
		@echo "\n"
		./$< nan
		@echo "\n"

push:
	@git add .
	@git status
	@git commit -m "cpp (make push)"
	@git push

.PHONY: all clean fclean re push test
		error char int float double

YELLOW	= \033[38;5;184m
GREEN	= \033[38;5;46m
CYAN	= \033[0;49;96m
B_GREEN	= \033[1;32m
COMPILE	= [$(CYAN)COMP$(NOC)]
INFO	= [$(YELLOW)INFO$(NOC)]
DONE	= [$(GREEN)DONE$(NOC)]
NOC		= \033[0m
