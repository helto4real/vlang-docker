# Generates basic image with compiled V using tcc

FROM thevlang/vlang-base:buster

LABEL maintainer="helto4real <helto4real@joysoftware.xyz>"

WORKDIR /opt/vlang

RUN git clone https://github.com/vlang/v /opt/vlang && make && v -version
