cmake_minimum_required(VERSION 2.8)
 
PROJECT(PCA-vnl)

include_directories("/NIRAL/work/danaele/install/eigen/include/eigen3")

# Find SlicerExecutionModel
find_package(SlicerExecutionModel REQUIRED)
include(${SlicerExecutionModel_USE_FILE})

set(matricesStat_SOURCE PCA-vnl.cxx)

set(matricesStat_HEADER PCA-vnl.h)

SEMMacroBuildCLI(
  NAME PCA-vnl
  EXECUTABLE_ONLY
  ADDITIONAL_SRCS ${PCA-vnl_SOURCE}
  TARGET_LIBRARIES
  )

