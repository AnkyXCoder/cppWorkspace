.PHONY: clean All

All:
	@echo "----------Building project:[ base_class_references - Debug ]----------"
	@cd "base_class_references" && "$(MAKE)" -f  "base_class_references.mk"
clean:
	@echo "----------Cleaning project:[ base_class_references - Debug ]----------"
	@cd "base_class_references" && "$(MAKE)" -f  "base_class_references.mk" clean
