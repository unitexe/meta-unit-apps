SUMMARY = "Systemd service for running python unit server"
SECTION = "unit"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SYSTEMD_SERVICE:${PN} = "unitsrvpy.service"

SRC_URI = "\
    file://unitsrvpy.service \
"

S = "${UNPACKDIR}"

do_install() {
    install -D -p -m0644 ${UNPACKDIR}/unitsrvpy.service ${D}${systemd_system_unitdir}/unitsrvpy.service
}

inherit systemd

FILES:${PN} = "\
    ${systemd_system_unitdir} \
"

RDEPENDS:${PN} = "\
    unitsrvpy \
"
