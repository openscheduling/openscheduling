# Open Scheduling

openscheduling is a general scheduling C++ library which allows you to build up a task-based scheduler.

## Getting Started

### Prerequisites

### Build

The build is performed with CMake, assuming that you are within the root directory of the repo, you can type:

```sh
# Create a temporal build dir
mkdir build

cd build

# Create Makefile structure from CMake
cmake ..

make
```
### Test

The tests are carried out using Google Test Framework. However, CMake (CTest) act as a bridge of the test framework so that you can do the following:

```sh
ctest --output-on-failure
```

### Installation

You can take advantage of the Makefile structure already created and type:

```sh
make install
```

By default, the library is installed in the standard system library path, e.g. /usr

## Usage

## License

Distributed under BSD-3 License. See [License](LICENSE)

## Built with

- GCC
- CMake