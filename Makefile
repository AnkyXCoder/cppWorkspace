.PHONY: clean All

All:
	@echo "----------Building project:[ virtual_functions - Debug ]----------"
	@cd "virtual_functions" && "$(MAKE)" -f  "virtual_functions.mk"
clean:
	@echo "----------Cleaning project:[ virtual_functions - Debug ]----------"
	@cd "virtual_functions" && "$(MAKE)" -f  "virtual_functions.mk" clean
