SUMMARY = "Unit device server"
LICENSE = "MIT"
SECTION = "unit"
LIC_FILES_CHKSUM = "file://LICENSE;md5=60abaf3a38a1962c1bf39e62eb2ba934"

inherit cargo cargo-update-recipe-crates

SRC_URI = "git://github.com/unitexe/unitsrv.git;protocol=https;branch=main"
SRCREV = "7eb68ccbebc3e9846bb45ee2afbefa936c7bf6cc"
require ${BPN}-crates.inc

DEPENDS = "protobuf-native"

S = "${UNPACKDIR}/git"
