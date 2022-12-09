#!/bin/sh

docker build -t malloc-failer ..
docker run -dti --name malloc_failer -v $(dirname $(pwd)):/project/ malloc-failer
docker exec -ti malloc_failer make -C ./demo
