# Directories
S_DIR=source
B_DIR=build

# LIBS
#Add for ttf mixer etc
LIBS= -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer

# Files
S_FILES=$(S_DIR)/Entity.cpp $(S_DIR)/cell.cpp $(S_DIR)/character.cpp $(S_DIR)/dots.cpp $(S_DIR)/gameover.cpp $(S_DIR)/gameplay.cpp $(S_DIR)/ghost.cpp $(S_DIR)/grid.cpp $(S_DIR)/help.cpp $(S_DIR)/main.cpp $(S_DIR)/map.cpp $(S_DIR)/mazeimage.cpp $(S_DIR)/menu.cpp $(S_DIR)/pacman.cpp
O_FILES=$(S_DIR)/Entity.o $(S_DIR)/cell.o $(S_DIR)/character.o $(S_DIR)/dots.o $(S_DIR)/gameover.o $(S_DIR)/gameplay.o $(S_DIR)/ghost.o $(S_DIR)/grid.o $(S_DIR)/help.o $(S_DIR)/main.o $(S_DIR)/map.o $(S_DIR)/mazeimage.o $(S_DIR)/menu.o $(S_DIR)/pacman.o
# Output
EXEC=$(B_DIR)/Pacman

# Build settings
CC=g++


all:Build

Build:
  $(CC) -c `sdl2-config --cflags` $(S_FILES) 
  $(CC) `sdl2-config --libs`  $(O_FILES) -o $(EXEC) $(LIBS)

build_run:Build
  $(EXEC)

clean:
  rm -rf $(B_DIR)/*
  rm -rf $(O_FILES)