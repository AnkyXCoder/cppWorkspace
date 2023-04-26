.PHONY: clean All

All:
	@echo "----------Building project:[ using_override - Debug ]----------"
	@cd "using_override" && "$(MAKE)" -f  "using_override.mk"
clean:
	@echo "----------Cleaning project:[ using_override - Debug ]----------"
	@cd "using_override" && "$(MAKE)" -f  "using_override.mk" clean
