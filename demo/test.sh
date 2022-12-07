#!/bin/sh

docker build -t malloc-test ..
docker run -dti --name malloc_tester -v $(dirname $(pwd)):/project/ malloc-test
docker exec -ti malloc_tester make -C ./demo
