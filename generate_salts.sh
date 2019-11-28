#!/bin/bash

for i in {0..65535}
do
	for i in {0..3}
	do
		printf '%04x' $RANDOM >> salts
	done
	printf '\n' >> salts
done


