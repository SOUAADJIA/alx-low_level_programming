#!/bin/bash

git add .

read -p "pleez your commit message here:" my_message_commit

git commit -m "$my_message_commit"

git push
