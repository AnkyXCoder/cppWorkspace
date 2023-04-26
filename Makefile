.PHONY: clean All

All:
	@echo "----------Building project:[ S16Challenge - Debug ]----------"
	@cd "S16Challenge" && "$(MAKE)" -f  "S16Challenge.mk"
clean:
	@echo "----------Cleaning project:[ S16Challenge - Debug ]----------"
	@cd "S16Challenge" && "$(MAKE)" -f  "S16Challenge.mk" clean
