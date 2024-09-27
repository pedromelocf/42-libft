NAME := libft.a

FLAGS := -Wall -Werror -Wextra -Wunreachable-code -Ofast
CC := cc
AR := ar -rcs
MKDIR := mkdir -p
MAKEFLAG := make --no-print-directory

#LIBFT
LIBFT_SRC_PATH := ./libft/
LIBFT_OBJ_DIR := ./libft/obj/
LIBFT_OBJ = $(addprefix $(LIBFT_OBJ_DIR), $(LIBFT_SRCS:.c=.o))

LIBFT_SRCS := ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
    ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
    ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
    ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
    ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
    ft_substr.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
    ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
    ft_putnbr_fd.c ft_strjoin.c ft_clean_matrix.c ft_get_matrix_len.c

#GNL
GNL_SRC_PATH := ./gnl/
GNL_OBJ_DIR := ./gnl/obj/
GNL_OBJ = $(addprefix $(GNL_OBJ_DIR), $(GNL_SRCS:.c=.o))

GNL_SRCS := get_next_line_utils.c get_next_line.c

#PRINTF
PRINTF_SRC_PATH := ./printf/
PRINTF_OBJ_DIR := ./printf/obj/
PRINTF_OBJ = $(addprefix $(PRINTF_OBJ_DIR), $(PRINTF_SRCS:.c=.o))

PRINTF_SRCS := ft_check_conversion.c ft_check_conversion_fd.c ft_dprintf.c \
	ft_printf.c ft_putchar.c ft_put_hex.c ft_putnbr_base.c ft_putnbr.c \
	ft_putnbr_hex.c ft_putstr.c ft_put_unsigned.c ft_put_void_pointer.c

#MESSAGES
MESSAGE1 := "------------------Compiling Libft Objects!-------------------"
MESSAGE2 := "---------------Objects Compiled Successfully!----------------"
MESSAGE3 := "-----------------libft.a Compiled Successfully----------------"
MESSAGE4 := "-------------------- All Objects cleaned!--------------------"
MESSAGE5 := "-------------------- All Binaries cleaned!-------------------"

all: $(NAME)

$(NAME): $(LIBFT_OBJ) $(GNL_OBJ) $(PRINTF_OBJ)
	@ echo $(MESSAGE1)
	@ echo ' '
	@ $(AR) $(NAME) $(LIBFT_OBJ) $(GNL_OBJ) $(PRINTF_OBJ)
	@ echo $(MESSAGE2)
	@ echo ' '
	@ echo $(MESSAGE3)
	@ echo ' '

$(LIBFT_OBJ_DIR)%.o: $(LIBFT_SRC_PATH)%.c
	@$(MKDIR) $(LIBFT_OBJ_DIR)
	@ $(CC) $(FLAGS) -c $< -o $@

$(GNL_OBJ_DIR)%.o: $(GNL_SRC_PATH)%.c
	@$(MKDIR) $(GNL_OBJ_DIR)
	@ $(CC) $(FLAGS) -c $< -o $@

$(PRINTF_OBJ_DIR)%.o: $(PRINTF_SRC_PATH)%.c
	@$(MKDIR) $(PRINTF_OBJ_DIR)
	@ $(CC) $(FLAGS) -c $< -o $@

clean :
	@ rm -rf $(LIBFT_OBJ_DIR) $(GNL_OBJ_DIR) $(PRINTF_OBJ_DIR)
	@ echo $(MESSAGE4)
	@ echo ' '

fclean : clean
	@ rm -f $(NAME)
	@ echo $(MESSAGE5)
	@ echo ' '

re : fclean all

libft :
	@ $(MAKEFLAG) -C $(LIBFT_DIR)

.PHONY: all clean fclean re libft
