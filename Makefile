MAIN_DIR := main
LIB_DIR := library

DEP_DIRS=$(shell find . -mindepth 1 -maxdepth 1 -type d)
#DEP_DIRS=$(dir $(wildcard *))

.PHONY: all clean info run

all: 
	$(foreach d, $(DEP_DIRS), $(MAKE) -C $(d) all;)

clean:
	$(foreach d, $(DEP_DIRS), $(MAKE) -C $(d) clean;)

run:
	$(MAKE) -C $(MAIN_DIR) $@

info:
	@echo "[*] dirs: $(DEP_DIRS)"

