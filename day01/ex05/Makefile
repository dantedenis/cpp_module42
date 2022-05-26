NAME	= harl
CC		= g++
FLAGS	= -Wall -Wextra -Wextra -std=c++98

VPATH := ./src/

INCLUDE		= -I ./inc

HEADERS		= ./inc/Harl.hpp

SRC_LST		= main.cpp	Harl.cpp

OBJ_PATH	= ./bin/
OBJ			= $(addprefix $(OBJ_PATH), $(patsubst %.cpp, %.o, $(SRC_LST)))

.PHONY: all clean fclean re check

all: $(OBJ_PATH) $(NAME)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(NAME): $(OBJ_PATH) $(OBJ)
	$(CC) $(OBJ) -o $@

$(OBJ_PATH)%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@

clean :
	rm -rf $(OBJ_PATH)

fclean : clean
	rm -f $(NAME)

re : fclean all