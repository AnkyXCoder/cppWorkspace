.PHONY: clean All

All:
	@echo "----------Building project:[ pure_virtual_functions - Debug ]----------"
	@cd "pure_virtual_functions" && "$(MAKE)" -f  "pure_virtual_functions.mk"
clean:
	@echo "----------Cleaning project:[ pure_virtual_functions - Debug ]----------"
	@cd "pure_virtual_functions" && "$(MAKE)" -f  "pure_virtual_functions.mk" clean
