gcc -I ./tree-sitter/lib/include ./hashmap.c ./tree-sitter-cpp/src/parser.c ./main.c ./tree-sitter/libtree-sitter.a ./tree-sitter-cpp/libtree-sitter-cpp.a -o main.exe -L/path/to/sqlite/lib -lsqlite3 -lm
./main.exe