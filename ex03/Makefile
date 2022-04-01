NAME	= ex03
CC		= g++
FLAGS	= -Wall -Wextra -Wextra -std=c++98
INC		= -I ./inc
VPATH	= ./src

SRC_LST		= $(notdir $(wildcard ./src/*.cpp))
HEADERS		= $(wildcard ./inc/*.hpp)

OBJ_PATH	= ./bin/
OBJ			= $(addprefix $(OBJ_PATH), $(patsubst %.cpp, %.o, $(SRC_LST)))

.PHONY:		all clean fclean re check
.SILENT:	$(OBJ_PATH)  all clean fclean re check

all:  $(OBJ_PATH) $(NAME)

$(OBJ_PATH):
	echo "Create $(OBJ_PATH)"
	mkdir -p $(OBJ_PATH)

$(NAME): $(OBJ_PATH) $(OBJ)
	$(CC) $(OBJ) -o $@

$(OBJ_PATH)%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) $(INC) -c $< -o $@

clean:
	echo "Delete ./bin/"
	rm -rf $(OBJ_PATH)

fclean: clean
	echo "Delete $(NAME)"
	rm -f $(NAME) $(PROGRESS)

re: fclean all