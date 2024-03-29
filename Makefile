NAME = pathfinder

ROOT_A = libmx.a \

LIB_A = ./libmx/libmx.a \

HEADERS = pathfinder.h \

FILES = pathfinder \
	mx_print_end \
	mx_print_path \
	mx_print_route \
	mx_print_price \
	mx_del_matrix \
	mx_check_for_trigers \
	mx_create_output \
	mx_push_new_deyxtra \
	mx_deyxtra_minimum \
	mx_new_deyxtra \
	mx_create_deyxtra \
	mx_create_matrix \
	mx_parse_matrix \
	mx_parse_str \
	mx_create_points \
	mx_create_pf_variables \
	mx_del_tdarray \
	mx_quit \
	mx_parse_file \
	mx_print_error \
	mx_check_for_open \
	mx_check_lines \
	mx_check_number \
	mx_create_rec \
	mx_check_fts_bug \
	mx_pathfinder_error_invalid_argc \
	mx_pathfinder_error_invalid_first_line \
	mx_pathfinder_error_invalid_name \
	mx_pathfinder_error_too_big \
	mx_pathfinder_error_duplicate_bridges

INC_H = $(addprefix "inc/", $(HEADERS))

ROOT_C = $(addsuffix ".c", $(FILES))

SRC_C = $(addprefix "src/", $(ROOT_C))

ROOT_O = $(addsuffix ".o", $(FILES))

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean

install:
	@make -C libmx install
	@cp $(SRC_C) .
	@cp $(INC_H) .
	@cp $(LIB_A) .
	@clang $(CFLAGS) -c $(ROOT_C)
	@clang $(CFLAGS) $(ROOT_O) $(ROOT_A) -o $(NAME)
	@mkdir -p obj
	@cp $(ROOT_O) obj/
	@rm -rf $(ROOT_O)

uninstall: clean
	@make -C libmx uninstall
	@rm -rf $(NAME)

clean:
	@make -C libmx clean
	@rm -rf $(ROOT_C)
	@rm -rf $(ROOT_A)
	@rm -rf $(HEADERS)
	@rm -rf obj

reinstall: uninstall install