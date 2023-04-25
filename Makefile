.PHONY: clean All

All:
	@echo "----------Building project:[ redefining_base_class_methods - Debug ]----------"
	@cd "redefining_base_class_methods" && "$(MAKE)" -f  "redefining_base_class_methods.mk"
clean:
	@echo "----------Cleaning project:[ redefining_base_class_methods - Debug ]----------"
	@cd "redefining_base_class_methods" && "$(MAKE)" -f  "redefining_base_class_methods.mk" clean
