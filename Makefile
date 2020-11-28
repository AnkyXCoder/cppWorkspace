.PHONY: clean All

All:
	@echo "----------Building project:[ pointer_and_array - Debug ]----------"
	@cd "pointer_and_array" && "$(MAKE)" -f  "pointer_and_array.mk"
clean:
	@echo "----------Cleaning project:[ pointer_and_array - Debug ]----------"
	@cd "pointer_and_array" && "$(MAKE)" -f  "pointer_and_array.mk" clean
