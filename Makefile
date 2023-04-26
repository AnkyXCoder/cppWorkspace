.PHONY: clean All

All:
	@echo "----------Building project:[ using_final_specifier - Debug ]----------"
	@cd "using_final_specifier" && "$(MAKE)" -f  "using_final_specifier.mk"
clean:
	@echo "----------Cleaning project:[ using_final_specifier - Debug ]----------"
	@cd "using_final_specifier" && "$(MAKE)" -f  "using_final_specifier.mk" clean
