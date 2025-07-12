SUMMARY = "Systemd service for booting to a flutter app"
SECTION = "unit"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

require conf/include/flutter-version.inc

SYSTEMD_SERVICE:${PN} = "fsnm.service"

SRC_URI = "\
    file://fsnm.service \
"

S = "${UNPACKDIR}"

do_install() {
    install -D -p -m0644 ${UNPACKDIR}/fsnm.service ${D}${systemd_system_unitdir}/fsnm.service

    # Variable substitution.
    sed -i 's|@@FLUTTER_SDK_TAG@@|${FLUTTER_SDK_TAG}|g' ${D}${systemd_system_unitdir}/fsnm.service
}

inherit systemd

FILES:${PN} = "\
    ${systemd_system_unitdir} \
"

RDEPENDS:${PN} = "\
    flutter-pi \
    flutter-sample-no-material \
"
