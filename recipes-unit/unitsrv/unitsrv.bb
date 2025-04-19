SUMMARY = "Unit device server"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=60abaf3a38a1962c1bf39e62eb2ba934"

inherit cargo cargo-update-recipe-crates

SRC_URI = "git://github.com/unitexe/unitsrv.git;protocol=https;branch=main"
SRCREV = "95eef9d4c5b1320b98c7f6c3108a6ee1ac440359"
#require ${BPN}-crates.inc

S = "${UNPACKDIR}/git"
