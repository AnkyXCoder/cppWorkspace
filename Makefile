.PHONY: clean All

All:
	@echo "----------Building project:[ S15Challenge - Debug ]----------"
	@cd "S15Challenge" && "$(MAKE)" -f  "S15Challenge.mk"
clean:
	@echo "----------Cleaning project:[ S15Challenge - Debug ]----------"
	@cd "S15Challenge" && "$(MAKE)" -f  "S15Challenge.mk" clean
