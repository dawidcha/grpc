UPBC_DIR=$HOME/.cache/bazel/_bazel_dawidcha/a260a34acc08f6c19d55f3cfe5ad76fb/execroot/com_google_protobuf/bazel-out/k8-fastbuild/bin/upb/upbc
PATH=$HOME/.cache/bazel/_bazel_dawidcha/a260a34acc08f6c19d55f3cfe5ad76fb/execroot/com_google_protobuf/bazel-out/k8-fastbuild/bin:$PATH
PROTO_PATH=$HOME/dev/grpc/third_party/protobuf/src:$HOME/dev/grpc/src/proto:$HOME/dev/grpc
UPB_OUT_DIR=$HOME/dev/grpc/src/core/ext/upb-generated/$2
UPBDEFS_OUT_DIR=$HOME/dev/grpc/src/core/ext/upb-generated/$2

protoc --upb_out=dllexport_tag=GRPCUPB,bootstrap_upb:$UPB_OUT_DIR --proto_path=$PROTO_PATH /home/dawidcha/dev/grpc/src/proto/$1 --plugin=$UPBC_DIR/protoc-gen-upb
protoc --upbdefs_out=dllexport_tag=GRPCUPB:$UPBDEFS_OUT_DIR --proto_path=$PROTO_PATH /home/dawidcha/dev/grpc/src/proto/$1 --plugin=$UPBC_DIR/protoc-gen-upbdefs
