DESCRIPTION = "dotnet 8.0 hello world application"
AUTHOR = "unitexe"
HOMEPAGE = "github.com/unitexe/dotnet-hello-world"
BUGTRACKER = "https://github.com/unitexe/dotnet-hello-world/issues"
SECTION = "unit"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.MIT;md5=3da9cfbcb788c80a0384361b4de20420"

SRC_URI = "git://github.com/unitexe/dotnet-hello-world.git;protocol=https;branch=main"
SRCREV = "434553c5ece14539a55f1e47f426670f18da4845"
S = "${WORKDIR}/git"

DOTNET_PROJECT = "DotnetHelloWorld"

S = "${WORKDIR}/git"

inherit dotnet

DEPENDS = "lttng-ust"
