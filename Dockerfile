FROM alpine:latest
RUN apk add build-base valgrind && mkdir -m 666 /project
WORKDIR /project
