SUMMARY = "Rust USBTMC app"
DESCRIPTION = "Send remote control messages to Siglent SPD 3303C"
AUTHOR = "unitexe"
HOMEPAGE = "https://github.com/unitexe/rust-usbtmc"
BUGTRACKER = "https://github.com/unitexe/rust-usbtmc/issues"
SECTION = "unit"

LICENSE = "CLOSED"

inherit cargo_bin

# Enable network for the compile task allowing cargo to download dependencies
do_compile[network] = "1"

SRC_URI = "git://github.com/unitexe/rust-usbtmc.git;protocol=https;branch=main"
SRCREV="5086818586ca3733abd1496b25c8fd7d812a540e"
S = "${WORKDIR}/git"
