NAME	= weapon
CC		= g++
FLAGS	= -Wall -Wextra -Wextra -std=c++98
INC		= -I ./inc
VPATH	= ./src
PROGRESS = progress

ifndef LIBS
	ifneq ($(OS), Windows_NT)
		LIBS = WINDOWS
	else
		LIBS = LINUX
	endif
endif

ifndef ECHO
	HIT_TOTAL = $(words $(SRC_LST) weapon)
	HIT_COUNT = $(eval HIT_N != expr $(HIT_N) + 1) $(HIT_N)
	ECHO =	echo c $(HIT_COUNT) t$(HIT_TOTAL) $@
endif


SRC_LST		= $(notdir $(wildcard ./src/*.cpp))
HEADERS		= $(wildcard ./inc/*.hpp)

OBJ_PATH	=./bin/
OBJ			= $(addprefix $(OBJ_PATH), $(patsubst %.cpp, %.o, $(SRC_LST)))

.PHONY:		all clean fclean re check
.SILENT:	$(OBJ) $(OBJ_PATH) $(NAME) all clean fclean re check

all: $(PROGRESS) $(OBJ_PATH) $(NAME)

$(PROGRESS):
	$(CC) main_pr.cpp -o $@

$(OBJ_PATH):
	echo "Create $(OBJ_PATH)"
	mkdir -p $(OBJ_PATH)

$(NAME): $(OBJ_PATH) $(OBJ)
	$(ECHO)
	$(CC) $(OBJ) -o $@

$(OBJ_PATH)%.o : %.cpp $(HEADERS)
	$(ECHO)
	$(CC) $(FLAGS) $(INC) -c $< -o $@

clean :
	echo "Delete ./bin/"
	rm -rf $(OBJ_PATH)

fclean : clean
	echo "Delete $(NAME)"
	rm -f $(NAME) $(PROGRESS)

re : fclean all