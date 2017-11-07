NAME = ft_retro
SRC = main.cpp src/Classes/Enemy.cpp \
               src/Classes/Enemy_Dragon.cpp \
               src/Classes/Enemy_Ship.cpp \
               src/Classes/Enemy_Meteor.cpp \
               src/Classes/Player.cpp \

OBJ = $(SRC:.cpp=.o)

#FLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME) -lncurses

%.o:%.cpp
	clang++ $(FLAGS) -c -o $@ $<

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) $(OBJ)

re: fclean $(NAME)