vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO hslcrb/Rasberrysoup
    REF v1.0.0
    SHA512 0 # This will need to be updated with the actual hash
    HEAD_REF main
)

vcpkg_cmake_configure(
    SOURCE_PATH "${SOURCE_PATH}"
)

vcpkg_cmake_install()
vcpkg_cmake_config_fixup()

file(REMOVE_RECURSE "${CURRENT_PACKAGES_DIR}/debug/include")
file(INSTALL "${SOURCE_PATH}/LICENSE" DESTINATION "${CURRENT_PACKAGES_DIR}/share/${PORT}" RENAME copyright)
