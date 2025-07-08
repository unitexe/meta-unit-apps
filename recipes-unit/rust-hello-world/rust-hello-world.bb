SUMMARY = "Rust hello world app that uses ludndev-hello-world crate"
LICENSE = "MIT"
SECTION = "unit"
LIC_FILES_CHKSUM = "file://LICENSE;md5=38bf13be5d6979b28bd8adddb2f2f9b3"

inherit cargo cargo-update-recipe-crates

SRC_URI = "git://github.com/unitexe/rust-hello-world.git;protocol=https;branch=main"
SRCREV = "6462d07e07b3366e553042682c97e98979c05af5"
require ${BPN}-crates.inc

DEPENDS = "protobuf-native"
