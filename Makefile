NAME=Push_swap
CC=cc
CC_FLAGS=-Wall -Wextra -Werror

SRCS=Push_swap.c

DIR_OBJS=.objs
DIR_DEPS=.deps
OBJS=$(SRCS:%.c=$(DIR_OBJS)/%.o)
DEPS=$(SRCS:%.c=$(DIR_DEPS)/%.d)

all: $(NAME)

$(NAME): $(OBJS)
	echo "Compiling Push_swap..."
	$(CC) $(CC_FLAGS) -o $@ $(OBJS) ./Libft/libft.a

	
-include $(DEPS)
$(DIR_OBJS)/%.o: %.c | $(DIR_OBJS) $(DIR_DEPS)
	$(CC) $(CC_FLAGS) -MMD -MP -MF $(DIR_DEPS)/$*.d -c -o $@ $<
	@$(MAKE) -C ./Libft

$(DIR_OBJS):
	mkdir -p $(DIR_OBJS)

$(DIR_DEPS):
	mkdir -p $(DIR_DEPS)

clean:
	echo "Removing files..."
	$(MAKE) -C ./Libft fclean
	rm -rf $(DIR_OBJS)
	rm -rf $(DIR_DEPS)

fclean: clean
	echo "Removing executable..."
	$(MAKE) -C ./Libft fclean
	rm -f $(NAME)
	

re: fclean all

.PHONY: all clean fclean re
.SILENT: