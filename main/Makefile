CXX := g++
CXXFLAGS := -Wall -g -std=c++1y
LDLIBS := -lshape
LDPATH := -L../library/build/bin

BUILD := ./build
SRC_DIR := ./src
OBJ_DIR := $(BUILD)/obj
BIN_DIR := $(BUILD)/bin
EXE := main.exe
INCS := -I../library/includes

DEP_LIB = ../library/build/bin/libshape.so

SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

DEPS := $(OBJS:.o=.d)

all: build $(BIN_DIR)/$(EXE)

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCS) -c $< -MMD -o $@

$(BIN_DIR)/$(EXE): $(OBJS) $(DEP_LIB)
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -o $(BIN_DIR)/$(EXE) $^ $(LDPATH) $(LDLIBS) 

$(DEP_LIB):
	$(MAKE) -C ../library all 

-include $(DEPS)

.PHONY: all build clean info run $(DEP_LIB)

build:
	mkdir -p $(BIN_DIR)
	mkdir -p $(OBJ_DIR)

clean:
	-@$(RM) -rvf $(BUILD)

run: 
	LD_LIBRARY_PATH=$(subst -L,,$(LDPATH)) $(BIN_DIR)/$(EXE)


info:
	@echo "[*] Application dir: $(BIN_DIR)"
	@echo "[*] Object dir: $(OBJ_DIR)"
	@echo "[*] Sources : $(SRCS)"
	@echo "[*] Objects : $(OBJS)"
	@echo "[*] Dependencies : $(DEPS)"
