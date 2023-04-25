.PHONY: clean All

All:
	@echo "----------Building project:[ S14Challenge2 - Debug ]----------"
	@cd "S14Challenge2" && "$(MAKE)" -f  "S14Challenge2.mk"
clean:
	@echo "----------Cleaning project:[ S14Challenge2 - Debug ]----------"
	@cd "S14Challenge2" && "$(MAKE)" -f  "S14Challenge2.mk" clean
