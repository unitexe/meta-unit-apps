SUMMARY = "Unit skopos server"
LICENSE = "MIT"
SECTION = "unit"
LIC_FILES_CHKSUM = "file://LICENSE;md5=60abaf3a38a1962c1bf39e62eb2ba934"

inherit cargo cargo-update-recipe-crates

SRC_URI = "git://github.com/unitexe/skopos.git;protocol=https;branch=main"
SRCREV = "e91fb1dc99e74daf21a31a8c75157629425e58a8"
require ${BPN}-crates.inc

DEPENDS = "protobuf-native"

S = "${UNPACKDIR}/git"
