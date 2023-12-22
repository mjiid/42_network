#!/bin/sh
ifconfig enp0s3 | awk '/ether/{print $2}'
