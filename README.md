# V programming language docker images
Docker container for V programming language

This image contains:
- **Debian Buster**, latest version (will be moved to alpine when supported)
- **Gcc** and **Clang** compilers
- **Nodejs** and **Npm**
- **Git**
- **Open-ssh Client**, to support github push over ssh
- **Valgrind**
- plus other dependencies

Works both with docker for linux and windows on x86 plattform.. All tags are currently same but will be different as V-language evolve.  

# Usage

## 1. Installing docker

[Here are installation instructions on ubuntu](https://docs.docker.com/engine/install/ubuntu/) but on that page there are instructions for other distributions too.

## 2 Running the image

```bash

docker run -d \
  -d \
  -v ${PWD}:/developer/project \
  --name v-container \
  thevlang/v

```

# Different images being built

Latest and dev tags is a nightly builds since V is under heavy development and are currently the same image. This will change when V language is released in stable form. 

| tag           |       Description |
| ------------- | ----------------- |
| latest        | Nightly build of latest V on Debian Buster|
| buster        | Nightly build of latest V on Debian Buster|
| dev           | Development build with all development dependecies |