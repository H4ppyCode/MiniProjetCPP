cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(MiniProjetCPP)

# Compilateur
set(CMAKE_CXX_STANDARD 11)


# Ajouter le fichier main.cpp comme exécutable
add_executable(MiniProjetCPP
        main.cpp
        functions/bin.cpp
        functions/dec.cpp
        functions/hex.cpp
        functions/octo.cpp)

# Ajouter les répertoires include
target_include_directories(MiniProjetCPP PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Ajouter les bibliothèques à lier si nécessaire
target_link_libraries(MiniProjetCPP PRIVATE
        # Ajouter les bibliothèques à lier ici
)
