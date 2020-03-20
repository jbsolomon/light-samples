set(APP_NAME "BasicTriangle")

add_executable(BasicTriangle ${GUI_TYPE} main.cxx)

if(NOT(TARGET Light))
  find_package(Light REQUIRED)
  message("Found Light")
endif(NOT(TARGET Light))

target_link_libraries(BasicTriangle Light SDL2 CellSDL)

if(WIN32)
  target_link_libraries(BasicTriangle SDL2main)
endif(WIN32)
