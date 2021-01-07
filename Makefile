.PHONY: clean All

All:
	@echo "----------Building project:[ operator_overloading_stream_insertion_extraction - Debug ]----------"
	@cd "operator_overloading_stream_insertion_extraction" && "$(MAKE)" -f  "operator_overloading_stream_insertion_extraction.mk"
clean:
	@echo "----------Cleaning project:[ operator_overloading_stream_insertion_extraction - Debug ]----------"
	@cd "operator_overloading_stream_insertion_extraction" && "$(MAKE)" -f  "operator_overloading_stream_insertion_extraction.mk" clean
