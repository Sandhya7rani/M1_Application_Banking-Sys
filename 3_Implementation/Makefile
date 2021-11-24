#Target_name

PROJ_NAME =	Bank
BUILD = build
SRC	= BankOperations.c projectmain.c
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out
ifdef OS
	RM=del /q
   	FixPath=$(subst /,\,$1)
	EXEC =exe
else
	ifeq ($(shell uname),Linux)
		RM= rm -rf
		FixPath= $1
		EXEC =out
	endif
endif
$(PROJECT_NAME):all

# Run the target even if the matching name exists




all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJECT_OUTPUT))

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(call FixPath,$(PROJECT_OUTPUT))
clean:
	$(RM) $(call FixPath,$(PROJ_NAME).$(EXEC))
$(BUILD):
	mkdir build

	


   
