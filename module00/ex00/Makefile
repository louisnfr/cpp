# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 19:22:29 by lraffin           #+#    #+#              #
#    Updated: 2022/03/09 15:56:17 by lraffin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC =				\
	megaphone.cpp	\

OS = $(shell uname -s)
ifeq ($(OS),Darwin)
	CXX = c++-11
else
	CXX = c++
endif
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

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

test: $(NAME)
	./$< "shhhhh... I think the students are asleep..."
	./$< Damnit " ! " "Sorry students, I thought this thing was off."
	./$<

push:
	@git add .
	@git status
	@git commit -m "cpp (make push)"
	@git push

.PHONY: all clean fclean re test push

YELLOW	= \033[38;5;184m
GREEN	= \033[38;5;46m
CYAN	= \033[0;49;96m
COMPILE	= [$(CYAN)COMP$(NOC)]
INFO	= [$(YELLOW)INFO$(NOC)]
DONE	= [$(GREEN)DONE$(NOC)]
NOC		= \033[0m
