NAME = bsp

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS_DIR = .
HDRS_DIR = .
OBJS_DIR = ./objs

SRCS = $(wildcard $(addsuffix /*.cpp, $(SRCS_DIR)))
HDRS = $(wildcard $(addsuffix /*.hpp, $(SRCS_DIR)))
OBJS = $(addprefix objs/, $(notdir $(patsubst %.cpp, %.o, $(SRCS))))

$(OBJS_DIR)/%.o: %.cpp $(HDRS)
	$(CC) $(CFLAGS) -o $@ -c $<
	
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

test:
	./fixed > test/my_out.txt
	diff test/my_out.txt test/subject_out.txt

clean:
	rm -f $(OBJS)
	rm -f test/my_out.txt

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test