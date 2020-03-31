# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvan-dyc <bvan-dyc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/03 22:53:24 by bvan-dyc          #+#    #+#              #
#    Updated: 2017/11/07 15:47:48 by bvan-dyc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra

NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	@printf '\033[32m -> %s\n\033[0m' "megaphone compiled!"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -o $@ -c $<
	@printf '\033[0m[/] %s\n\033[0m' "$<"

clean:
	@rm -rf $(OBJ)
	@printf '\033[0m[/] %s\n\033[0m' "cleaned megaphone"

fclean: clean
	@rm -rf $(NAME)
	@printf '\033[0m[/] %s\n\033[0m' "fcleaned megaphone"

re: fclean all
