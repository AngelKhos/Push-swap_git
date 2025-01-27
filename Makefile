NAME=Push_swap
CC=cc
CC_FLAGS=-Wall -Wextra -Werror

SRCS=Push_swap.c

LST_OBJS=$(SRCS:.c=.o)
DEPS=$(SRCS:.c=.d)

DIR_OBJS=.objs

OBJS=$(addprefix $(DIR_OBJS)/,$(LST_OBJS)) 

all: $(NAME)

$(NAME): $(OBJS)
	echo "Compiling Push_swap"
	$(CC) $(CC_FLAGS) -o $@ $(OBJS)
	
-include $(DEPS)
$(DIR_OBJS)/%.o: %.c | $(DIR_OBJS)
	$(CC) $(CC_FLAGS) -c -o $@ $< -MMD

$(DIR_OBJS):
	mkdir -p $(DIR_OBJS)


clean:
	echo "Removing files..."
	rm -rf $(DIR_OBJS)
	rm -f *.d

fclean: clean
	echo "Removing executable..."
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SILENT: