CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = ex00
BIN_DIR = bin
SRC_DIR = src
TEST_DIR = tests
INCLUDE_DIR = $(SRC_DIR)

SRCS := $(wildcard $(SRC_DIR)/*.cpp) $(wildcard $(SRC_DIR)/*/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp, $(BIN_DIR)/%.o, $(SRCS))
MAIN = $(TEST_DIR)/main.cpp

all: $(BIN_DIR) $(BIN_DIR)/$(NAME)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/$(NAME): $(OBJS) $(MAIN)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) $^ -o $@

$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

clean:
	rm -rf $(BIN_DIR)

fclean: clean
	rm -f $(BIN_DIR)/$(NAME)

re: fclean all

val: fclean all
	valgrind --quiet ./$(BIN_DIR)/$(NAME)

.PHONY: all clean fclean re val
