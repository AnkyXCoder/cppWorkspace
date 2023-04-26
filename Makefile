.PHONY: clean All

All:
	@echo "----------Building project:[ virtual_destructors - Debug ]----------"
	@cd "virtual_destructors" && "$(MAKE)" -f  "virtual_destructors.mk"
clean:
	@echo "----------Cleaning project:[ virtual_destructors - Debug ]----------"
	@cd "virtual_destructors" && "$(MAKE)" -f  "virtual_destructors.mk" clean
