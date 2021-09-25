# SwarmTemplate

This template allows for easy setup of a new ARGoS3 swarm project. This version uses Buzz controllers and C++ loop functions. The `libs/` directory within the Buzz controllers directory should potentially be update, however, this setup will work for many use cases.

## Workflow

A Makefile has been created to simplify the building process. The following commands may be used to build, run, and clean the project:
```
# clean, build, and run the code (all is optional)
make all 

# the following may be done individually, however, 'make all' performs each of the following.

# compile the code
make build

# run the argos experiment
make run

# clean out the build folder (to force a complete rebuild)
make clean
```

To run the code the traditional way (it must be built 1st):
```
argos3 -c swarm_template.argos
```

Notes:
- all edits require restarting the simulation
- edits to the .argos file does not require anything else
- edits to the C++ files requires rebuilding with cmake/make again
- edits to the .bzz controller files reqires rebuilding with cmake/make again
	- Alternatively, you can edit .bzz files in the built-in editor and not restart the simulation

To build buzz by itself (without the C++):
```
bzzc controllers/swarm_template_main.bzz
```
### Depreciated (still Functional)
To build the code:
```
mkdir build
cd build
cmake ..
make
cd ..
```

## Directory Structure

The directory structure is as shown below. Within the repository root, is this readme and the experiment's .argos file (xml). Inside the controllers subdirectory is the .bzz (buzz) controller code that each individual bot will run. Finally, in the loop_functions subdirectory are .cpp and .h files (C++) for interacting with the environment in a god-like mode.

```
.
├── CMakeLists.txt
├── controllers
│   ├── libs
│   │   ├── table.bzz
│   │   └── vec2.bzz
│   ├── movement_functions.bzz
│   └── swarm_template_main.bzz
├── loop_functions
│   ├── CMakeLists.txt
│   ├── swarm_template_loop_functions.cpp
│   └── swarm_template_loop_functions.h
├── Makefile
├── README.md
├── run.bash
└── swarm_template.argos
```
## Dependencies

- ARGoS setup and tested
- Buzz setup and tested