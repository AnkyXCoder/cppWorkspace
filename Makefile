.PHONY: clean All

All:
	@echo "----------Building project:[ CodingExercise35 - Debug ]----------"
	@cd "CodingExercise35" && "$(MAKE)" -f  "CodingExercise35.mk"
clean:
	@echo "----------Cleaning project:[ CodingExercise35 - Debug ]----------"
	@cd "CodingExercise35" && "$(MAKE)" -f  "CodingExercise35.mk" clean
