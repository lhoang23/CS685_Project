# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "tuw_gazebo_msgs: 5 messages, 0 services")

set(MSG_I_FLAGS "-Ituw_gazebo_msgs:/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(tuw_gazebo_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg" NAME_WE)
add_custom_target(_tuw_gazebo_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "tuw_gazebo_msgs" "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg" ""
)

get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsMeasureI4ws.msg" NAME_WE)
add_custom_target(_tuw_gazebo_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "tuw_gazebo_msgs" "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsMeasureI4ws.msg" "tuw_gazebo_msgs/Measure:std_msgs/Header"
)

get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg" NAME_WE)
add_custom_target(_tuw_gazebo_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "tuw_gazebo_msgs" "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg" ""
)

get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsCmdI4ws.msg" NAME_WE)
add_custom_target(_tuw_gazebo_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "tuw_gazebo_msgs" "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsCmdI4ws.msg" "tuw_gazebo_msgs/JointCmd:std_msgs/Header"
)

get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointState.msg" NAME_WE)
add_custom_target(_tuw_gazebo_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "tuw_gazebo_msgs" "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointState.msg" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_cpp(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsMeasureI4ws.msg"
  "${MSG_I_FLAGS}"
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_cpp(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_cpp(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsCmdI4ws.msg"
  "${MSG_I_FLAGS}"
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_cpp(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tuw_gazebo_msgs
)

### Generating Services

### Generating Module File
_generate_module_cpp(tuw_gazebo_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tuw_gazebo_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(tuw_gazebo_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(tuw_gazebo_msgs_generate_messages tuw_gazebo_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_cpp _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsMeasureI4ws.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_cpp _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_cpp _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsCmdI4ws.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_cpp _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointState.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_cpp _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(tuw_gazebo_msgs_gencpp)
add_dependencies(tuw_gazebo_msgs_gencpp tuw_gazebo_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS tuw_gazebo_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_eus(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsMeasureI4ws.msg"
  "${MSG_I_FLAGS}"
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_eus(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_eus(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsCmdI4ws.msg"
  "${MSG_I_FLAGS}"
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_eus(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tuw_gazebo_msgs
)

### Generating Services

### Generating Module File
_generate_module_eus(tuw_gazebo_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tuw_gazebo_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(tuw_gazebo_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(tuw_gazebo_msgs_generate_messages tuw_gazebo_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_eus _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsMeasureI4ws.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_eus _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_eus _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsCmdI4ws.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_eus _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointState.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_eus _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(tuw_gazebo_msgs_geneus)
add_dependencies(tuw_gazebo_msgs_geneus tuw_gazebo_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS tuw_gazebo_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_lisp(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsMeasureI4ws.msg"
  "${MSG_I_FLAGS}"
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_lisp(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_lisp(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsCmdI4ws.msg"
  "${MSG_I_FLAGS}"
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_lisp(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tuw_gazebo_msgs
)

### Generating Services

### Generating Module File
_generate_module_lisp(tuw_gazebo_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tuw_gazebo_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(tuw_gazebo_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(tuw_gazebo_msgs_generate_messages tuw_gazebo_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_lisp _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsMeasureI4ws.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_lisp _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_lisp _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsCmdI4ws.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_lisp _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointState.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_lisp _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(tuw_gazebo_msgs_genlisp)
add_dependencies(tuw_gazebo_msgs_genlisp tuw_gazebo_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS tuw_gazebo_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_nodejs(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsMeasureI4ws.msg"
  "${MSG_I_FLAGS}"
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_nodejs(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_nodejs(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsCmdI4ws.msg"
  "${MSG_I_FLAGS}"
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_nodejs(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/tuw_gazebo_msgs
)

### Generating Services

### Generating Module File
_generate_module_nodejs(tuw_gazebo_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/tuw_gazebo_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(tuw_gazebo_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(tuw_gazebo_msgs_generate_messages tuw_gazebo_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_nodejs _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsMeasureI4ws.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_nodejs _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_nodejs _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsCmdI4ws.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_nodejs _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointState.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_nodejs _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(tuw_gazebo_msgs_gennodejs)
add_dependencies(tuw_gazebo_msgs_gennodejs tuw_gazebo_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS tuw_gazebo_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_py(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsMeasureI4ws.msg"
  "${MSG_I_FLAGS}"
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_py(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_py(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsCmdI4ws.msg"
  "${MSG_I_FLAGS}"
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tuw_gazebo_msgs
)
_generate_msg_py(tuw_gazebo_msgs
  "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tuw_gazebo_msgs
)

### Generating Services

### Generating Module File
_generate_module_py(tuw_gazebo_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tuw_gazebo_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(tuw_gazebo_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(tuw_gazebo_msgs_generate_messages tuw_gazebo_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/Measure.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_py _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsMeasureI4ws.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_py _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointCmd.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_py _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointsCmdI4ws.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_py _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/catkin_ws/src/tuw_msgs/tuw_gazebo_msgs/msg/JointState.msg" NAME_WE)
add_dependencies(tuw_gazebo_msgs_generate_messages_py _tuw_gazebo_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(tuw_gazebo_msgs_genpy)
add_dependencies(tuw_gazebo_msgs_genpy tuw_gazebo_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS tuw_gazebo_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tuw_gazebo_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tuw_gazebo_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(tuw_gazebo_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tuw_gazebo_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tuw_gazebo_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(tuw_gazebo_msgs_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tuw_gazebo_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tuw_gazebo_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(tuw_gazebo_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/tuw_gazebo_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/tuw_gazebo_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(tuw_gazebo_msgs_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tuw_gazebo_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tuw_gazebo_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tuw_gazebo_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(tuw_gazebo_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
