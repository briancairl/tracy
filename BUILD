cc_library(
    name="tracycli",
    hdrs=["Tracy.hpp", "TracyClient.cpp"],
    srcs=["TracyClient.cpp"],
    strip_include_prefix="",
    copts=["-DTRACY_ENABLE"],
    linkopts=["-ldl", "-pthread"],
    include_prefix="",
    deps=["//client:libclient", "//common:libcommon"],
    visibility=["//visibility:public"],
)


cc_binary(
    name="tracycli_sanity_check",
    srcs=["sanity_main.cpp"],
    deps=[":tracycli"],
    linkopts=["-ldl", "-pthread"],
    copts=["-DTRACY_ENABLE"],
    visibility=["//visibility:public"],
)
