set(swarm_template_loop_functions_SOURCES swarm_template_loop_functions.cpp)

if(ARGOS_COMPILE_QTOPENGL)
  set(swarm_template_loop_functions_SOURCES
    ${swarm_template_loop_functions_SOURCES})
endif(ARGOS_COMPILE_QTOPENGL)

# Check for Buzz
find_package(Buzz REQUIRED)
include_directories(${BUZZ_C_INCLUDE_DIR})

add_library(swarm_template_loop_functions MODULE ${swarm_template_loop_functions_SOURCES})
target_link_libraries(swarm_template_loop_functions
  ${BUZZ_LIBRARY}
  argos3core_simulator
  argos3plugin_simulator_dynamics2d
  argos3plugin_simulator_entities
  argos3plugin_simulator_kheperaiv
  argos3plugin_simulator_genericrobot
  argos3plugin_simulator_media
  argos3plugin_simulator_buzz)

link_directories(${CMAKE_BINARY_DIR}/..)
