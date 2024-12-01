# Use an official Ubuntu as a base image
FROM ubuntu:20.04
ENV LANG=C.UTF-8
ENV LC_ALL=C.UTF-8

# Setup timezone
RUN echo 'Etc/UTC' > /etc/timezone \
    && ln -s /usr/share/zoneinfo/Etc/UTC /etc/localtime \
    && apt-get update \
    && apt-get -y -q --no-install-recommends install \
        tzdata \
    && apt-get clean

# Install dependencies
RUN apt-get update && apt-get install -y \
    cmake \
    g++ \
    git \
    wget \
    unzip \
    && rm -rf /var/lib/apt/lists/*

# Install Eigen 3.4.0	
RUN git clone --branch 3.4.0 https://gitlab.com/libeigen/eigen.git /opt/eigen \
	&& mkdir -p /opt/eigen/build && cd /opt/eigen/build \
	&& cmake \
	       -DCMAKE_BUILD_TYPE=Release \
		   -DEIGEN_BUILD_DOC=OFF \
		   -DBUILD_TESTING=OFF \
	   .. \
	&& make install \
    && cd /opt && rm -r /opt/eigen

# Set working directory to /app
RUN mkdir -p /home/maybe-docker 
WORKDIR /home/maybe-docker
