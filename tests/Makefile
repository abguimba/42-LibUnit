# Project file
NAME = unittesttests

# Log file

LOG = tests.log

# Project builds and dirs
SRCDIR = ./
SRCDIR_ERROR = ./libunit/
SRCNAMES = main.c wrong_functions.c wrong_functions_2.c libft_utils.c
SRCNAMES_ERROR = 00_error_launcher.c 01_bus_strcpy.c 02_seg_strcpy.c \
03_ok_strcpy.c 04_ko_strcpy.c 05_timeout_strcpy.c 06_sigabort_strcpy.c \
07_fpe_strcpy.c
SRC = $(addprefix $(SRCDIR), $(SRCNAMES))
SRC_ERROR = $(addprefix $(SRCDIR_ERROR), $(SRCNAMES_ERROR))
INC = ./inc/
BUILDDIR = ./build/
BUILDOBJS = $(addprefix $(BUILDDIR), $(SRCNAMES:.c=.o))
BUILDOBJS_ERROR = $(addprefix $(BUILDDIR), $(SRCNAMES_ERROR:.c=.o))

# Framework builds and dirs
FRAMEDIR = ../framework/
FRAMEFT = ../framework/libunit.a
FRAMEINC = ../framework/inc

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
all: $(BUILDDIR) $(FRAMEFT) $(NAME)

test: fclean all
	@./$(NAME) > $(LOG) 2>/dev/null ||:
	@cat $(LOG)

# Object dir rule
$(BUILDDIR):
	@mkdir -p $(BUILDDIR)

# General Objects rule
$(BUILDDIR)%.o:$(SRCDIR)%.c
	@$(CC) $(CFLAGS) -I$(FRAMEINC) -I$(INC) -o $@ -c $<

# Error Objects rule
$(BUILDDIR)%.o:$(SRCDIR_ERROR)%.c
	@$(CC) $(CFLAGS) -I$(FRAMEINC) -I$(INC) -o $@ -c $<

# Project file rule
$(NAME): $(BUILDOBJS) $(BUILDOBJS_ERROR)
	@echo "$(WHI)TESTS:$(DEF)"
	@echo "$(CYA)General Obj compiled$(DEF)"
	@$(CC) $(CFLAGS) -o $(NAME) $(BUILDOBJS) $(BUILDOBJS_ERROR) $(FRAMEFT)
	@echo "$(YEL)PROJECT COMPILED$(DEF)"

# Framework rule
$(FRAMEFT):
	@make -C $(FRAMEDIR)

# Cleaning up the build files
clean:
	@rm -rf $(BUILDDIR)
	@make -C $(FRAMEDIR) clean
	@echo "$(RED)Removed tests obj build dir and obj$(DEF)"

# Getting rid of the project file
fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(LOG)
	@make -C $(FRAMEDIR) fclean
	@echo "$(RED)Removed tests executable$(DEF)"
	@echo "$(RED)Removed tests.log file$(DEF)"


# Do both of the above
re: fclean all

# Just in case those files exist in the root dir
.PHONY: all fclean clean re
