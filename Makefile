DIR = code
.PHONY: clean
all: Bin

Bin:
	cxx -C $(DIR)
	mv $(DIR)/$(DIR) ./that.e

clean:
	rm -f $(DIR)/*.o
	rm -f $(DIR)/$(DIR)
