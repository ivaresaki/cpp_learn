CXX := g++
CXXFLAGS := -Wall -Wextra -Werror -std=c++1y -fPIC
LDFLAGS := -shared #-L/usr/lib -lstdc++ -lm
BUILD := ./build
SRC_DIR := ./src
OBJ_DIR := $(BUILD)/obj
BIN_DIR := $(BUILD)/bin
EXE := libshape.so 
INCS := -Iinclude

SRC := $(wildcard $(SRC_DIR)/*.cpp)

OBJS := $(SRC:%.cpp=$(OBJ_DIR)/%.o)

DEPS := $(OBJS:.o=.d)

all: build $(BIN_DIR)/$(EXE)

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCS) -c $< -MMD -o $@

$(BIN_DIR)/$(EXE): $(OBJS)
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -o $(BIN_DIR)/$(EXE) $^ $(LDFLAGS)


-include $(DEPS)

.PHONY: all build clean debug release info

build:
	mkdir -p $(BIN_DIR)
	mkdir -p $(OBJ_DIR)

debug: CXXFLAGS += -DDEBUG -g
debug: all

release: CXXFLAGS += -O2
release: all

clean:
	-@$(RM) -rvf $(OBJ_DIR)
	-@$(RM) -rvf $(BIN_DIR)
	-@$(RM) -rvf $(BUILD)

info:
	@echo "[*] Application dir: $(BIN_DIR)"
	@echo "[*] Object dir: $(OBJ_DIR)"
	@echo "[*] Sources dir: $(SRC)"
	@echo "[*] Objects dir: $(OBJS)"
	@echo "[*] Dependencies dir: $(DEPS)"
