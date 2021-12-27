set(SOURCES
  scheduling_block.hpp
  task.hpp
  sequence.hpp
)

add_subdirectory(constraints)
add_subdirectory(sb_relations)

add_library(SCHEDULING_BLOCKS ${SOURCES})
