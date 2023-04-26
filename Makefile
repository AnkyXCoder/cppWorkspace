.PHONY: clean All

All:
	@echo "----------Building project:[ function_binding_problem - Debug ]----------"
	@cd "function_binding_problem" && "$(MAKE)" -f  "function_binding_problem.mk"
clean:
	@echo "----------Cleaning project:[ function_binding_problem - Debug ]----------"
	@cd "function_binding_problem" && "$(MAKE)" -f  "function_binding_problem.mk" clean
