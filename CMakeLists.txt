 cmake_minimum_required(VERSION 4.1.0)


project(LightYears
	VERSION 1.0.0
	LANGUAGES C CXX
)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)
set(SFML_LIB_NAME SFML)

FetchContent_Declare(
	${SFML_LIB_NAME}
	GIT_REPOSITORY https://github.com/SFML/SFML
	GIT_TAG 2.5.1
	GIT_SHALLOW FALSE
)

FetchContent_MakeAvailable(${SFML_LIB_NAME})
include(FetchContent)
set(SFML_LIB_NAME SFML)

FetchContent_Declare(
	${SFML_LIB_NAME}
	GIT_REPOSITORY https://github.com/SFML/SFML
	GIT_TAG 2.5.1
	GIT_SHALLOW FALSE
)

FetchContent_MakeAvailable(${SFML_LIB_NAME})

set(LIGHT_YEARS_ENGINE_TARGET_NAME LightYearEngine)
set(LIGHT_YEARS_GAME_TARGET_NAME LightYearsGame)
add_subdirectory(LightYearsEngine)
add_subdirectory(LightYearsGame)
