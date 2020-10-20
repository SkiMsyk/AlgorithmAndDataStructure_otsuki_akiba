FROM ubuntu:latest
MAINTAINER username
WORKDIR /home/project

RUN apt-get update && apt-get install -y \
  vim \
  gcc \
  g++
