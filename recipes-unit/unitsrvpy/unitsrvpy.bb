SUMMARY = "Unit device server in python"
LICENSE = "MIT"
SECTION = "unit"
LIC_FILES_CHKSUM = "file://LICENSE;md5=60abaf3a38a1962c1bf39e62eb2ba934"

SRC_URI = "git://github.com/unitexe/unitsrvpy.git;protocol=https;branch=main"
SRCREV = "7b6ba38214b25e2948aae463a9d887664c3d31a4"

inherit python_setuptools_build_meta

DEPENDS = "\
    python3-pdm-backend-native \
    python3-grpcio-tools-native \
"

RDEPENDS:${PN} = "\
    python3-grpcio \
    python3-grpcio-reflection \
    python3-protobuf \
    python3-googleapis-common-protos \
"

do_compile:prepend() {
    python3 -m grpc_tools.protoc \
        --proto_path=${UNPACKDIR}/${BB_GIT_DEFAULT_DESTSUFFIX}/proto \
        --python_out=${UNPACKDIR}/${BB_GIT_DEFAULT_DESTSUFFIX}/src \
        --grpc_python_out=${UNPACKDIR}/${BB_GIT_DEFAULT_DESTSUFFIX}/src \
        ${UNPACKDIR}/${BB_GIT_DEFAULT_DESTSUFFIX}/proto/wireguard.proto
}
