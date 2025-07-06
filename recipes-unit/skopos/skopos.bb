SUMMARY = "Unit skopos server"
LICENSE = "MIT"
SECTION = "unit"
LIC_FILES_CHKSUM = "file://LICENSE;md5=60abaf3a38a1962c1bf39e62eb2ba934"

inherit cargo cargo-update-recipe-crates

SRC_URI = "git://github.com/unitexe/skopos.git;protocol=https;branch=main"
SRCREV = "23bd3667def3655f801c35652e19fe0983392d00"
require ${BPN}-crates.inc

DEPENDS = "protobuf-native"

S = "${UNPACKDIR}/git"
