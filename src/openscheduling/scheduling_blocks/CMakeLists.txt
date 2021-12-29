set(SOURCES
  scheduling_block.cpp
  task.cpp
  sequence.cpp
)
set(HEADERS
  scheduling_block.hpp
  task.hpp
  sequence.hpp
)

add_subdirectory(constraints)

add_library(SCHEDULING_BLOCKS ${SOURCES})

target_link_libraries(SCHEDULING_BLOCKS PUBLIC 
  CONSTRAINTS
  )
