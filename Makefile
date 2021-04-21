NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra -O3 -c
INCLUDES = -I$(HEADERS_DIRECTORY)
HEADERS_LIST = libft.h
HEADERS_DIRECTORY = ./
HEADERS = $(addprefix $(HEADERS_DIRECTORY), $(HEADERS_LIST))
SOURCES_DIRECTORY = ./
SOURCES_LIST = ft_memset.c\
	ft_bzero.c\
	ft_strlen.c\
	ft_strncmp.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_isdigit.c\
	ft_isalpha.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_memcpy.c\
	ft_atoi.c\
	ft_strlcat.c\
	ft_strchr.c\
	ft_memmove.c\
	ft_memcmp.c\
	ft_strrchr.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_strdup.c\
	ft_memchr.c\
	ft_strlcpy.c\
	ft_memccpy.c\
	ft_substr.c\
	ft_strtrim.c\
	ft_putchar_fd.c\
	ft_strjoin.c\

SOURCES = $(addprefix $(SOURCES_DIRECTORY), $(SOURCES_LIST))
OBJECTS_DIRECTORY = objects/
OBJECTS_LIST = $(patsubst %.c, %.o, $(SOURCES_LIST))
OBJECTS	= $(addprefix $(OBJECTS_DIRECTORY), $(OBJECTS_LIST))

# COLORS

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

MAKEFLAGS += -j4

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS_DIRECTORY) $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@echo "\n$(NAME): $(GREEN)object files were created$(RESET)"
	@echo "$(NAME): $(GREEN)$(NAME) was created$(RESET)"

$(OBJECTS_DIRECTORY):
	@mkdir -p $(OBJECTS_DIRECTORY)
	@echo "$(NAME): $(GREEN)$(OBJECTS_DIRECTORY) was created$(RESET)"

$(OBJECTS_DIRECTORY)%.o : $(SOURCES_DIRECTORY)%.c $(HEADERS)
	@$(CC) $(FLAGS) $(INCLUDES) $< -o $@
	@echo "$(GREEN).$(RESET)\c"

clean:
	@rm -rf $(OBJECTS_DIRECTORY)
	@echo "$(NAME): $(RED)$(OBJECTS_DIRECTORY) was deleted$(RESET)"
	@echo "$(NAME): $(RED)object files were deleted$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

re:
	@$(MAKE) fclean
	@$(MAKE) all
