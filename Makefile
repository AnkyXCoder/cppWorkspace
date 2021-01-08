.PHONY: clean All

All:
	@echo "----------Building project:[ CodingExercise36 - Debug ]----------"
	@cd "CodingExercise36" && "$(MAKE)" -f  "CodingExercise36.mk"
clean:
	@echo "----------Cleaning project:[ CodingExercise36 - Debug ]----------"
	@cd "CodingExercise36" && "$(MAKE)" -f  "CodingExercise36.mk" clean
