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

## Setup Instructions

### Clone the Repository

```bash
git clone https://github.com/yourusername/maybe-docker.git
cd maybe-docker
```
### Building and Running the Project Locally with Docker

You can build and run the project inside a Docker container, ensuring that all dependencies (like Eigen and Google Test) are installed in the container. This allows for a consistent and isolated build environment, making it easier to manage dependencies and avoid issues across different systems.

#### Step 1: Build the Docker Image

In the project root directory, where the `Dockerfile` is located, run the following command to build the Docker image:

```bash
docker build -t maybe-docker .
```

This command will:

Build the Docker image with the tag maybe-docker.
Install all necessary dependencies, including Eigen and Google Test, as defined in the Dockerfile.

Running Tests Locally
If you'd like to run the tests locally, you can use CMake to build the project:

Create a build directory:
mkdir build
cd build
Generate the build files with CMake:
cmake ..
Build the project:
make
Run the tests:
./tests
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
│   └── main.cpp            # Main C++ application
├── tests/
│   └── test_main.cpp       # Google Test-based test case
└── external/
    └── googletest/         # Google Test as a submodule
```
.github/workflows/ci.yml: The CI configuration for GitHub Actions.

Dockerfile: The Docker configuration for building and running the project.
CMakeLists.txt: The CMake configuration for building the project.
src/main.cpp: The main application source code that uses Eigen for linear algebra operations.
tests/test_main.cpp: Unit tests using Google Test to test the Eigen-based code.
License
This project is licensed under the MIT License - see the LICENSE file for details.


### Explanation of the `README.md`:

1. **Project Description**: The introduction explains the project and the key technologies used, including **Eigen**, **Google Test**, **Docker**, and **GitHub Actions**.

2. **Prerequisites**: Lists the software you need installed to work with the project locally (Docker, Git, CMake, and g++).

3. **Setup Instructions**:
   - **Clone the Repository**: Provides the command to clone the repository.
   - **Building and Running Locally with Docker**: Explains how to build the Docker image and run the project inside a container.
   - **Running Tests Locally**: Steps to run the project and tests locally without Docker.

4. **GitHub Actions**: Briefly explains the CI setup using **GitHub Actions** and mentions where to find the workflow configuration (`.github/workflows/ci.yml`).

5. **Project Structure**: Shows the structure of the project and explains what each folder and file is for.

6. **License**: This section mentions that the project uses the **MIT License** (you can change this based on your actual license). If you have a `LICENSE` file, you can link to it here.

---

This `README.md` provides clear instructions for both local development and understanding how CI/CD works with GitHub Actions. It also makes it easier for others to get started with your project.


