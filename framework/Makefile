# Project file
NAME = libunit.a

# Project builds and dirs
SRCDIR = ./
SRCNAMES = libunit.c
SRC = $(addprefix $(SRCDIR), $(SRCNAMES))
INC = ./inc/
BUILDDIR = ./build/
BUILDOBJS = $(addprefix $(BUILDDIR), $(SRCNAMES:.c=.o))

# # Libft builds and dirs
# LIBDIR = ./libft/
# LIBFT = ./libft/libft.a
# LIBINC = ./libft/includes/

# Optimization and Compiler flags and commands
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Debugging flags
DEBUG = -g -O0 -fsanitize=address \
-fno-omit-frame-pointer	\
-fsanitize-address-use-after-scope \
-fsanitize=undefined \

DEF =		\033[0m
GRA =		\033[1m
SOU =		\033[4m
BLI =		\033[5m
BLA =		\033[30m
RED =		\033[31m
GRE =		\033[32m
YEL =		\033[33m
BLU =		\033[34m
PUR =		\033[35m
CYA =		\033[36m
WHI =		\033[37m

# Main rule
all: $(BUILDDIR) $(NAME)

# Object dir rule
$(BUILDDIR):
	@mkdir -p $(BUILDDIR)

# Objects rule
$(BUILDDIR)%.o:$(SRCDIR)%.c
	@$(CC) $(CFLAGS) -I$(INC) -o $@ -c $<

# Project file rule
$(NAME): $(BUILDOBJS)
	@echo "$(WHI)LIBUNIT:$(DEF)"
	@echo "$(CYA)Libunit Objects compiled$(DEF)"
	@ar rcs $(NAME) $(BUILDOBJS)
	@ranlib $(NAME)
	@echo "$(GRE)Libunit.a Compiled and Indexed!$(DEF)"

# # Libft rule
# $(LIBFT):
# 	make -C $(LIBDIR)

# Cleaning up the build files
clean:
	@rm -rf $(BUILDDIR)
	@echo "$(RED)Removed libunit obj build dir and obj$(DEF)"

# Getting rid of the project file
fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)Removed libunit.a$(DEF)"

# Do both of the above
re: fclean all

# Just in case those files exist in the root dir
.PHONY: all fclean clean re
