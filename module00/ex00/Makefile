# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 19:22:29 by lraffin           #+#    #+#              #
#    Updated: 2022/03/04 19:34:53 by lraffin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

S = megaphone.cpp
B = .build
D = $(S:%.cpp=$(B)/%.d)
O = $(D:.d=.o)

all: $(NAME)

$(NAME): $(O)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(B):
	mkdir $@

$(B)/%.o: %.cpp | $(B)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(B)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	./$< "shhhhh... I think the students are asleep..."
	./$< Damnit " ! " "Sorry students, I thought this thing was off."
	./$<

push:
	git add .
	git commit -m "cpp (make push)"
	git status
	git push

.PHONY: all clean fclean re test
