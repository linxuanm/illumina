#!/usr/bin/env bash

cd app
vue build
cd ..

for file in app/dist/*; do
    name=$(basename "$1")

    if [[ $file == *.html ]]
    then
        cp $file "backend/templates/"
    else
        cp -r $file "backend/static/"
    fi
done
