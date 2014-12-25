{
  "targets": [
    {
      "target_name": "vienna_rna",
      "sources": [ "vienna_rna.cpp" ],
      'include_dirs': [
		  '<(module_root_dir)/libs/ViennaRNA/H/',
		],

      'libraries': [
		  '<(module_root_dir)/libs/ViennaRNA/lib/libRNA.a'
	  ]
    }
  ]
}
