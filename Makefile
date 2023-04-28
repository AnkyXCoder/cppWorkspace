.PHONY: clean All

All:
	@echo "----------Building project:[ S17Challenge - Debug ]----------"
	@cd "S17Challenge" && "$(MAKE)" -f  "S17Challenge.mk"
clean:
	@echo "----------Cleaning project:[ S17Challenge - Debug ]----------"
	@cd "S17Challenge" && "$(MAKE)" -f  "S17Challenge.mk" clean
