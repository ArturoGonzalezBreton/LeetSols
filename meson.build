project('LeetSols', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3'])

gtest_proj = subproject('gtest')
gtest_dep = gtest_proj.get_variable('gtest_main_dep')
gmock_dep = gtest_proj.get_variable('gmock_dep')

deps = [gmock_dep, gtest_dep]

# doc_sources = ['src/TwoSumCuadratic.cpp']
# doxyfile = meson.source_root() + '/Doxyfile'
# docs = 'docs'

# custom_target('generate_docs',
#   command : ['doxygen', doxyfile, '-C'],
#   output : docs,
#   input : doc_sources,
#   install : true,
#   install_dir: docs
# )

# run_target('docs', 
#   command : ['doxygen', doxyfile]
# )

main_src = ['src/main.cpp','src/TwoSumCuadratic.cpp']
solucion = executable('solucion', main_src)

tests_src = ['test/TwoSumCuadraticTest.cpp', 'src/TwoSumCuadratic.cpp']
test = executable('testTwoSumCuadratic', tests_src, dependencies: deps)

test('testTwoSumCuadratic', test)
