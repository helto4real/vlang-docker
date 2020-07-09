![GitHub Workflow Status](https://img.shields.io/github/workflow/status/helto4real/vlang-docker/Deploy%20nightly%20build%20to%20Dockerhub) 
![Docker Pulls](https://img.shields.io/docker/pulls/thevlang/vlang)
![Docker Image Size (latest by date)](https://img.shields.io/docker/image-size/thevlang/vlang)

# V programming language docker images
Docker container for V programming language. Please check individual Dockerfile for what is provided in detail

Works both with docker for linux and windows on x86 plattform.. All tags are currently same but will be different as V-language evolve.  

## Structure of the image

The images are deployed as `thevlang/vlang:tag`. This will hopefully eventually be official image for vlang.

# Usage

## 1. Installing docker

[Here are installation instructions on ubuntu](https://docs.docker.com/engine/install/ubuntu/) but on that page there are instructions for other distributions too.

## 2 Running the image

### Running the standard image

Running the development image using iteractive terminal.

```bash
docker run \
  -it \
  --name v-container \
  thevlang/vlang \
  /bin/bash
```

### Running the development image

Running the development image using iteractive terminal and mapping current directory to internal /src directory.
```bash
docker run \
  -it \
  -v ${PWD}:/src \
  --name v-dev-container \
  thevlang/vlang:alpine-dev \
  /bin/sh
```


# Different images being built

Latest and dev tags is a nightly builds since V is under heavy development and are currently the same image. This will change when V language is released in stable form. Also other plattforms and os versions will be added.

| tag           |       Description |
| ------------- | ----------------- |
| latest        | Nightly build of latest V on Debian Buster|
| \[githash\]   | The sha commit id built |
| buster        | Nightly build of latest V on Debian Buster|
| alpine        | Nightly build of latest V on Alpine 3.11 Buster|
| ubuntu        | Nightly build of latest V on Ubuntu 20.04|
| \[dist\]-dev  | Development build with all development dependecies on distribution alpine/buster |

## OS specific base images

OS specific base images are built for specific distributions. They are named `[dist]-base`.

## Build images

Specific images can be used in build actions. They are named `[dist]-build`