SUMMARY = "Systemd service for running unit server"
SECTION = "unit"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SYSTEMD_SERVICE:${PN} = "unitsrv.service"

SRC_URI = "\
    file://unitsrv.service \
"

S = "${UNPACKDIR}"

do_install() {
    install -D -p -m0644 ${UNPACKDIR}/unitsrv.service ${D}${systemd_system_unitdir}/unitsrv.service
}

inherit systemd

FILES:${PN} = "\
    ${systemd_system_unitdir} \
"

RDEPENDS:${PN} = "\
    unitsrv \
"
