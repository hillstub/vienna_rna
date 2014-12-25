{
  "targets": [
    {
      "target_name": "vienna_rna",
      "sources": [ "vienna_rna.cpp" ],
      'include_dirs': [
		  '/usr/local/include/ViennaRNA/',
      '/usr/include/ViennaRNA/',
		],

      'libraries': [
		  '/usr/lib/libRNA.a'
	  ]
    }
  ]
}
