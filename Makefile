NAME=push_swap

# /////////////////////////

CC=cc
CC_FLAGS=-Wall -Wextra -Werror

# /////////////////////////

DIR_OBJS=.objs
DIR_DEPS=.deps

# /////////////////////////

SRCS=srcs/main.c\
	srcs/push.c\
	srcs/swap.c\
	srcs/reverse_rotate.c\
	srcs/rotate.c\
	srcs/utils.c\
	srcs/parsing.c

LIB= libft/libft.a
INCS= incs/push_swap.h
OBJS=$(SRCS:srcs/%.c=$(DIR_OBJS)/%.o)
DEPS=$(SRCS:srcs/%.c=$(DIR_DEPS)/%.d)

# /////////////////////////

all: compile_start libft $(NAME) compile_done

compile_start:
	echo "$(GREEN) Compile start ... $(END)"

compile_done:
	echo "$(GREEN) Compiling done $(END)"

libft:
	$(MAKE) --silent -C ./libft

$(NAME): $(OBJS) $(DEPS) $(INCS)
	$(CC) $(CC_FLAGS) $(OBJS) $(LIB) -o $@
	echo "$(BLUE) Your so_long is ready $(END)"


$(DIR_OBJS)/%.o: srcs/%.c Makefile | $(DIR_OBJS) $(DIR_DEPS) 
	$(CC) $(CC_FLAGS) -O3 -MMD -MP -MF $(DIR_DEPS)/$*.d -c -o $@ $<

# /////////////////////////

$(DIR_OBJS):
	mkdir -p $(DIR_OBJS)

$(DIR_DEPS):
	mkdir -p $(DIR_DEPS)

# /////////////////////////

clean:
	echo "$(RED)Removing files... $(END)"
	$(MAKE) --silent -C  ./libft fclean
	rm -rf $(DIR_OBJS)
	rm -rf $(DIR_DEPS)

fclean: clean
	echo "$(RED)Removing executable... $(END)"
	$(MAKE) --silent -C  ./libft fclean
	rm -rf $(NAME)

re: fclean all

# /////////////////////////

GREEN=\033[0;32m
RED=\033[0;31m
BLUE=\033[0;34m
END=\033[0m

# /////////////////////////

.PHONY: all clean fclean re libft
.SILENT: