/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t munchin_info = {
    .hwc_value = "INDIA",
    .sku_value = "",

    .brand = "POCO",
    .device = "munchin",
    .marketname = "POCO F4",
    .model = "22021211RG",
    .build_fingerprint = "Mi/aliothin/aliothin:13/TKQ1.220829.002/V14.0.5.0.TKHINXM:user/release-keys",

    .nfc = true,
};

static const variant_info_t munch_global_info = {
    .hwc_value = "GLOBAL",
    .sku_value = "",

    .brand = "POCO",
    .device = "munch",
    .marketname = "POCO F4",
    .model = "22021211RG",
    .build_fingerprint = "POCO/alioth_global/alioth:13/TKQ1.220829.002/V14.0.8.0.TKHMIXM:user/release-keys",

    .nfc = true,
};

static const variant_info_t munch_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Redmi",
    .device = "munch",
    .marketname = "Redmi K40s",
    .model = "22021211RC",
    .build_fingerprint = "Redmi/alioth/alioth:13/TKQ1.220829.002/V14.0.8.0.TKHCNXM:user/release-keys",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    munchin_info,
    munch_global_info,
    munch_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
