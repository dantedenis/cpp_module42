NAME	= phonebook
CC		= clang++
FLAGS	= -Wall -Wextra -Wextra -std=c++98

SRC_LST		= main.cpp	PhoneBook.cpp	Contact.cpp

OBJ_PATH	=./bin/
OBJ			= $(addprefix $(OBJ_PATH), $(patsubst %.cpp, %.o, $(SRC_LST)))

.PHONY: all clean fclean re

all: $(OBJ_PATH) $(NAME)
	./phonebook

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(NAME): $(OBJ_PATH) $(OBJ)
	$(CC) $(OBJ) -o $@

$(OBJ_PATH)%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ_PATH)

fclean : clean
	rm -f $(NAME)

re : fclean all