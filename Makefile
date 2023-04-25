.PHONY: clean All

All:
	@echo "----------Building project:[ class_copy_constructor_assignment_operator - Debug ]----------"
	@cd "class_copy_constructor_assignment_operator" && "$(MAKE)" -f  "class_copy_constructor_assignment_operator.mk"
clean:
	@echo "----------Cleaning project:[ class_copy_constructor_assignment_operator - Debug ]----------"
	@cd "class_copy_constructor_assignment_operator" && "$(MAKE)" -f  "class_copy_constructor_assignment_operator.mk" clean
