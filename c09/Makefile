
SRC_M = ft_split.c ...
OBJS_M = $(SRC_M:.c=.o)
OBJSB = $(SRCSB:.c=.o)
NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rc

all: $(NAME)

$(NAME): $(OBJS_M)
	$(AR) $@ $^

bonus: $(OBJSB)
	$(AR) $(NAME) $(OBJSB)

%.o : %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS_M) ${OBJSB}

fclean : clean
	$(RM) $(NAME)

re : fclean alld