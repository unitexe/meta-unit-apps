SUMMARY = "Unit applications"
DESCRIPTION = "Packagegroup for custom applications in unit images"
SECTION = "unit"
LICENSE = "MIT"

inherit packagegroup

RDEPENDS:${PN}:append = " unitsrv"
