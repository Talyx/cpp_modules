SRCS			= 	AMateria.cpp\
					Cure.cpp \
					Ice.cpp \
					MateriaSource.cpp\
					Character.cpp \
					main.cpp \

INCLUDES 		=	./

HEADERS			=	AMateria.hpp\
					ICharacter.hpp	\
					Character.hpp		\
					Cure.hpp		\
					Ice.hpp	\
					IMateriaSource.hpp	\
					MateriaSource.hpp	\

OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -I -g

NAME			= materia

all:			$(NAME)

$(OBJS): %.o: %.cpp $(HEADERS) Makefile
	$(CXX) $(CXXFLAGS) -c $< -I $(INCLUDES) -o $@

$(NAME): $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS)  -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:			clean
	$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY:			all clean fclean re test