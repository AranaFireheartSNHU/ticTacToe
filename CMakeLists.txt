cmake_minimum_required(VERSION 3.7)
project(ticTacToe)
set(CMAKE_CXX_STANDARD 17)

# Tell cmake where Qt is located
set(Qt5_DIR "/usr/local/Cellar/qt/5.14.1/lib/cmake/Qt5")
set(QT_INCLUDES "/usr/local/Cellar/qt/5.14.1/include")
#set(CMAKE_PREFIX_PATH "C:\\Qt\\Qt5.14.1\\mingw73_64\\")
#set(Qt5_DIR "C:\\Qt\\5.14.1\\mingw73_64\\lib\\cmake\\Qt5")
set(QT_INCLUDES "cmake-build-debug/ticTacToeStarter_autogen/include/ui_TicTacToeMainWindow.h")
MESSAGE("QT_INCLUDES: ${QT_INCLUDES}")

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON) # if you have any .ui files
set(CMAKE_AUTORCC ON) # if you have any .qrc files

# Find QT packages
include_directories(cmake-build-debug/ticTacToeStarter_autogen/include)
find_package(Qt5 COMPONENTS Widgets)

# Add the include directories for the Qt 5 Widgets module to
# the compile lines.
include_directories(${Qt5Widgets_INCLUDE_DIRS})

# Add compiler flags for building executables (-fPIE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS}")

qt5_generate_moc(ticTacToeGame.cpp ticTacToeGame.moc ticTacToe.cpp ticTacToe.moc)

add_executable(${PROJECT_NAME} ticTacToeGame.cpp ticTacToe.cpp ticTacToe.h TicTacToeMainWindow.ui TicTacToeResources.qrc)

#Link the crapsStarter executable to the Qt 5 widgets library.
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)


