# Copyright (C) 2019 Witekio
# Released under the MIT license (see COPYING.MIT for the terms)
FILESEXTRAPATHS_prepend := "${THISDIR}/${MACHINE}:"

SRC_URI_append_imx6qdlsabresd = " \
    file://runc_config.cfg \
"
