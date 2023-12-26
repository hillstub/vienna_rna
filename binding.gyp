{
  "targets": [
    {
      "target_name": "vienna_rna",
      "sources": [ "vienna_rna.cpp" ],
      'include_dirs': [
		  '<(module_root_dir)/libs/ViennaRNA/src/ViennaRNA/',
      '<(module_root_dir)/libs/ViennaRNA/src/ViennaRNA/datastructures/',
      '<(module_root_dir)/libs/ViennaRNA/src/',
		],

      'libraries': [
		  '<(module_root_dir)/libs/ViennaRNA/src/ViennaRNA/libRNA.a'
	  ]
    }
  ]
}
