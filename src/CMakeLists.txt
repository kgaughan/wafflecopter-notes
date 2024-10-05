find_package(
	wxWidgets
	REQUIRED
	COMPONENTS net core base)
if(wxWidgets_USE_FILE)
	include(${wxWidgets_USE_FILE})
endif()

add_executable(
	wafflecopter
	app.cpp
	mainframe.cpp)

target_link_libraries(wafflecopter ${wxWidgets_LIBRARIES})
