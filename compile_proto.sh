#!/bin/bash
PROTO_FILE="proto/protocol.proto"
OUT_DIR="proto/"


protoc --cpp_out=${OUT_DIR} --proto_path=${OUT_DIR} ${PROTO_FILE}



if [ $? -eq 0 ]; then
	echo "Protobuf compilation success."
else 
	echo "Protobuf compilation failure."
fi




