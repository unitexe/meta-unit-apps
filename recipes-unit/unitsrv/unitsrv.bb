SUMMARY = "Unit device server"
LICENSE = "MIT"
SECTION = "unit"
LIC_FILES_CHKSUM = "file://LICENSE;md5=60abaf3a38a1962c1bf39e62eb2ba934"

inherit cargo cargo-update-recipe-crates

SRC_URI = "git://github.com/unitexe/unitsrv.git;protocol=https;branch=main"
SRCREV = "9ee3f5b60329fcf946db5c9eb7bc1b6be99b90c2"
require ${BPN}-crates.inc

DEPENDS = "protobuf-native"
