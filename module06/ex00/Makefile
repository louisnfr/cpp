# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 19:22:29 by lraffin           #+#    #+#              #
#    Updated: 2022/03/23 16:45:57 by lraffin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = conversion

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

test: try_error try_char try_int try_float try_double

try_error: $(NAME)
		@echo "*** $(B_GREEN)ERROR$(NOC) ***\n"
		./$<
		./$< 1 2 53.0f
		./$< bonjour

try_char: $(NAME)
		@echo "\n*** $(B_GREEN)CHAR$(NOC) ***\n"
		./$< 'c'
		./$< 'a'
		./$< 'Z'

try_int: $(NAME)
		@echo "\n*** $(B_GREEN)INT$(NOC) ***\n"
		./$< 0
		./$< -42
		./$< 42
		./$< 2147483647
		./$< -2147483648
		./$< 2147483648

try_float: $(NAME)
		@echo "\n*** $(B_GREEN)FLOAT$(NOC) ***\n"
		./$< 0.0f
		./$< -4.2f
		./$< 186.492f
		./$< -inff
		./$< +inff
		./$< nanf

try_double: $(NAME)
		@echo "\n*** $(B_GREEN)DOUBLE$(NOC) ***\n"
		./$< 0.0
		./$< 53.0
		./$< 9178.1320
		./$< -inf
		./$< +inf
		./$< nan

push:
	@git add .
	@git status
	@git commit -m "cpp (make push)"
	@git push

.PHONY: all clean fclean re push test
		try_error try_char try_int try_float try_double

YELLOW	= \033[38;5;184m
GREEN	= \033[38;5;46m
CYAN	= \033[0;49;96m
B_GREEN	= \033[1;32m
COMPILE	= [$(CYAN)COMP$(NOC)]
INFO	= [$(YELLOW)INFO$(NOC)]
DONE	= [$(GREEN)DONE$(NOC)]
NOC		= \033[0m
