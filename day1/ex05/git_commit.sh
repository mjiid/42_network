#!/bin/sh
git log | grep -oE '[[:alnum:]]{40}'

