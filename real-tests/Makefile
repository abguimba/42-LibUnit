# Project file
NAME = unittestrealtests

# Log file

LOG = real-tests.log

# Project builds and dirs
SRCDIR = ./
SRCDIR_ATOI = ./atoi/
SRCDIR_STRLEN = ./strlen/
SRCDIR_ISASCII = ./isascii/
SRCDIR_STRCPY = ./strcpy/
SRCNAMES = main.c
SRCNAMES_ATOI = 00_atoi_launcher.c 02_atoi_null_test.c 04_atoi_basic_test.c \
06_atoi_alfa_test.c 08_atoi_max_int_test.c 10_atoi_moins_test.c \
12_atoi_plus_ou_moins.c 01_atoi_basic_test.c 03_atoi_min_int_test.c \
05_atoi_basic_test.c 07_atoi_empty_test.c 09_atoi_plus_test.c 11_atoi_espace_test.c
SRCNAMES_STRLEN = 00_strlen_launcher.c 01_strlen_basic_test.c 02_strlen_null_test.c \
03_strlen_one_c_test.c 04_strlen_big_test.c 05_strlen_hard_test.c
SRCNAMES_ISASCII = 00_isascii_launcher.c 02_isascii_null_test.c 04_isascii_number_test.c \
06_isascii_alfa_test.c 01_isascii_really_null_test.c 03_isascii_basic_test.c \
05_isascii_punct_test.c 07_isascii_special_test.c
SRCNAMES_STRCPY = 00_strcpy_launcher.c 01_strcpy_s1_null_test.c \
02_strcpy_s2_null_test.c 03_strcpy_both_null_test.c
SRC = $(addprefix $(SRCDIR), $(SRCNAMES))
SRC_ATOI = $(addprefix $(SRCDIR_ATOI), $(SRCNAMES_ATOI))
SRC_STRLEN = $(addprefix $(SRCDIR_STRLEN), $(SRCNAMES_STRLEN))
SRC_ISASCII = $(addprefix $(SRCDIR_ISASCII), $(SRCNAMES_ISASCII))
SRC_STRCPY = $(addprefix $(SRCDIR_STRCPY), $(SRCNAMES_STRCPY))
INC = ./inc/
BUILDDIR = ./build/
BUILDOBJS = $(addprefix $(BUILDDIR), $(SRCNAMES:.c=.o))
BUILDOBJS_ATOI = $(addprefix $(BUILDDIR), $(SRCNAMES_ATOI:.c=.o))
BUILDOBJS_STRLEN = $(addprefix $(BUILDDIR), $(SRCNAMES_STRLEN:.c=.o))
BUILDOBJS_ISASCII = $(addprefix $(BUILDDIR), $(SRCNAMES_ISASCII:.c=.o))
BUILDOBJS_STRCPY = $(addprefix $(BUILDDIR), $(SRCNAMES_STRCPY:.c=.o))

# Framework builds and dirs
FRAMEDIR = ../framework/
FRAMEFT = ../framework/libunit.a
FRAMEINC = ../framework/inc

# Libft builds and dirs
LIBDIR = ./libft/
LIBFT = ./libft/libft.a
LIBINC = ./libft/includes/

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
all: $(BUILDDIR) $(LIBFT) $(FRAMEFT) $(NAME)

test: fclean all
	@./$(NAME) > $(LOG) ||:
	@cat $(LOG)

# Object dir rule
$(BUILDDIR):
	@mkdir -p $(BUILDDIR)

# General Objects rule
$(BUILDDIR)%.o:$(SRCDIR)%.c
	@$(CC) $(CFLAGS) -I$(FRAMEINC) -I$(LIBINC) -I$(INC) -o $@ -c $<

# Atoi Objects rule
$(BUILDDIR)%.o:$(SRCDIR_ATOI)%.c
	@$(CC) $(CFLAGS) -I$(FRAMEINC) -I$(LIBINC) -I$(INC) -o $@ -c $<

# Strlen Objects rule
$(BUILDDIR)%.o:$(SRCDIR_STRLEN)%.c
	@$(CC) $(CFLAGS) -I$(FRAMEINC) -I$(LIBINC) -I$(INC) -o $@ -c $<

# IsAscii Objects rule
$(BUILDDIR)%.o:$(SRCDIR_ISASCII)%.c
	@$(CC) $(CFLAGS) -I$(FRAMEINC) -I$(LIBINC) -I$(INC) -o $@ -c $<

# Strcpy Objects rule
$(BUILDDIR)%.o:$(SRCDIR_STRCPY)%.c
	@$(CC) $(CFLAGS) -I$(FRAMEINC) -I$(LIBINC) -I$(INC) -o $@ -c $<

# Project file rule
$(NAME): $(BUILDOBJS) $(BUILDOBJS_ATOI) $(BUILDOBJS_STRCPY) $(BUILDOBJS_STRLEN) $(BUILDOBJS_ISASCII)
	@echo "$(WHI)REAL-TESTS:$(DEF)"
	@echo "$(CYA)General Obj compiled$(DEF)"
	@echo "$(CYA)IsAscii Obj compiled$(DEF)"
	@echo "$(CYA)Atoi Obj compiled$(DEF)"
	@echo "$(CYA)Strlen Obj compiled$(DEF)"
	@echo "$(CYA)Strcpy Obj compiled$(DEF)"
	@$(CC) $(CFLAGS) -o $(NAME) $(BUILDOBJS) $(BUILDOBJS_ATOI) $(BUILDOBJS_STRCPY) $(BUILDOBJS_STRLEN) $(BUILDOBJS_ISASCII) $(FRAMEFT) $(LIBFT)
	@echo "$(YEL)PROJECT COMPILED$(DEF)"

# Framework rule
$(FRAMEFT):
	@make -C $(FRAMEDIR)

# Libft rule
$(LIBFT):
	@make -C $(LIBDIR)

# Cleaning up the build files
clean:
	@rm -rf $(BUILDDIR)
	@make -C $(FRAMEDIR) clean
	@make -C $(LIBDIR) clean
	@echo "$(RED)Removed real-tests obj build dir and obj$(DEF)"

# Getting rid of the project file
fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(LOG)
	@make -C $(FRAMEDIR) fclean
	@make -C $(LIBDIR) fclean
	@echo "$(RED)Removed real-tests executable$(DEF)"
	@echo "$(RED)Removed real-tests.log file$(DEF)"


# Do both of the above
re: fclean all

# Just in case those files exist in the root dir
.PHONY: all fclean clean re
