SUMMARY = "Unit skopos server"
LICENSE = "MIT"
SECTION = "unit"
LIC_FILES_CHKSUM = "file://LICENSE;md5=60abaf3a38a1962c1bf39e62eb2ba934"

inherit cargo cargo-update-recipe-crates

SRC_URI = "git://github.com/unitexe/skopos.git;protocol=https;branch=main"
SRCREV = "0ee55c3362abf1f7bf8dc4e5de161f1ba8c97ec1"
#require ${BPN}-crates.inc

DEPENDS = "protobuf-native"

S = "${UNPACKDIR}/git"
