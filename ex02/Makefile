# Définition des variables
NAME = brain
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJDIR = obj

# Fichiers source
SRCS = main.cpp
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

# Cibles par défaut
all: $(OBJDIR) $(NAME)

# Règle pour créer l'exécutable final
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# Règle pour créer les fichiers objets
$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Créer le dossier obj s'il n'existe pas
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Supprimer les fichiers objets et l'exécutable
clean:
	rm -rf $(OBJDIR)

# Supprimer tout, y compris l'exécutable
fclean: clean
	rm -f $(NAME)

# Nettoyer et recompiler
re: fclean all

# Indiquer que les cibles clean, fclean et re ne sont pas des fichiers
.PHONY: all clean fclean re