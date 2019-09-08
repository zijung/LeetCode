set(SQUENCE 92)

add_executable(${PROJECT_NAME}_${SQUENCE}
    main.cc Solution.h
    ${PROJECT_SOURCE_DIR}/utils/utils.cc
    ${PROJECT_SOURCE_DIR}/utils/ListNode.cc
)
