# My C++ Project with Eigen, Google Test, Docker, and GitHub Actions

This is a simple C++ project that demonstrates the usage of the **Eigen** library for linear algebra operations, **Google Test** for unit testing, **Docker** for creating a consistent build environment, and **GitHub Actions** for Continuous Integration (CI). 

## Features

- **Eigen**: A C++ template library for linear algebra (vectors, matrices, etc.)
- **Google Test**: A framework for writing and running C++ tests.
- **Docker**: Ensures a consistent build environment across different systems.
- **GitHub Actions**: Automates build and testing workflows on GitHub.

## Prerequisites

Before you get started, make sure you have the following installed:

- **Docker**: For building and running the application in a containerized environment.
- **Git**: To clone the repository.
- **CMake**: To build the project.
- **g++**: The GNU C++ compiler.

## Getting Started on Devcontainer
This repository is configured with a `devcontainer` for Visual Studio Code, allowing you to quickly set up and use the development environment using Docker.

### 1. Clone the Repository
```bash
git clone https://github.com/CMaybe/maybe-docker.git
cd maybe-docker
code .
```
### 2. Open in VSCode

Open the cloned repository in Visual Studio Code. VSCode will detect the devcontainer configuration and prompt you to reopen the folder in the container.

### 3. Reopen in Container

Follow the prompt to reopen the repository in the Docker container. VSCode will build and start the container as defined in the .devcontainer directory, setting up the development environment according to the configuratio.

#### Option: Access the Container Directly
If you prefer to access the container directly, you can use the following command:

```bash
docker exec -it dev-docker-example /bin/bash
```

### 4.Create a build directory and run:
```bash
cmake -S. -Bbuild -DCMAKE_BUILD_TYPE=Debug
cmake --build build --config Debug
cd build
ctest -C Debug --output-on-failure --verbose
```


### 5. build docker and push to ghcr
```bash
docker build -t docker-example:latest .
docker tag docker-example:latest ghcr.io/{user_name}/docker-example:latest
docker push ghcr.io/{user_name}/docker-example:latest

# your have to set permissions
# change .github/workflows/ci.yml to using your image
```

GitHub Actions for CI
This project uses GitHub Actions to automate building and testing the project on each push or pull request to the main branch.

The workflow file is located at .github/workflows/ci.yml. It will:

Build the project using Docker.
Run the tests in the Docker container.
You can view the status of the CI workflow in the Actions tab of the GitHub repository.

Project Structure
The directory structure is as follows:

```
maybe-docker/
├── .github/
│   └── workflows/
│       └── ci.yml          # GitHub Actions CI configuration
├── Dockerfile              # Docker configuration for building and running the project
├── CMakeLists.txt          # CMake build configuration
├── src/
│   └── CMakeLists.txt 
│   └── example.cpp            # Main C++ application
│   └── example.hpp
├── tests/
│   └── CMakeLists.txt 
│   └── test.cpp       # Google Test-based test case
└── external/
    └── googletest/         # Google Test as a submodule
```

`.github/workflows/ci.yml`: The CI configuration for GitHub Actions.
`Dockerfile`: The Docker configuration for building and running the project. \
`CMakeLists.txt`: The CMake configuration for building the project. \
`src/example.cpp`: The main application source code that uses Eigen for linear algebra operations. \
`tests/test.cpp`: Unit tests using Google Test to test the Eigen-based code. \
`License`: 
This project is licensed under the MIT License - see the LICENSE file for details.


### Explanation of the `README.md`:

1. **Project Description**: The introduction explains the project and the key technologies used, including **Eigen**, **Google Test**, **Docker**, and **GitHub Actions**.

2. **Prerequisites**: Lists the software you need installed to work with the project locally (Docker, Git, CMake, and g++).

3. **Setup Instructions**:
   - **Clone the Repository**: Provides the command to clone the repository.
   - **Building and Running Locally with Docker**: Explains how to build the Docker image and run the project inside a container.

4. **GitHub Actions**: Briefly explains the CI setup using **GitHub Actions** and mentions where to find the workflow configuration (`.github/workflows/ci.yml`).

5. **Project Structure**: Shows the structure of the project and explains what each folder and file is for.

6. **License**: This section mentions that the project uses the **MIT License** (you can change this based on your actual license). If you have a `LICENSE` file, you can link to it here.

---

This `README.md` provides clear instructions for both local development and understanding how CI/CD works with GitHub Actions. It also makes it easier for others to get started with your project.


