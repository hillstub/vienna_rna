cmd_Release/vienna_rna.node := ./gyp-mac-tool flock ./Release/linker.lock c++ -bundle -Wl,-search_paths_first -mmacosx-version-min=10.5 -arch x86_64 -L./Release  -o Release/vienna_rna.node Release/obj.target/vienna_rna/vienna_rna.o -undefined dynamic_lookup /Users/HMvanRossum/Documents/Programming/vienna_rna/libs/ViennaRNA/lib/libRNA.a
