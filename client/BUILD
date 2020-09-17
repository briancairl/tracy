cc_library(
    name="rpmalloc",
    hdrs=["tracy_rpmalloc.hpp"],
    srcs=["tracy_rpmalloc.cpp"],
    strip_include_prefix="",
    include_prefix="client",
    deps=[],
    visibility=["//visibility:public"],
)

cc_library(
    name="libclient",
    hdrs=glob(["*.h", "*.hpp"]) + glob(["*.cpp"]),
    strip_include_prefix="",
    include_prefix="client",
    deps=["//common:libcommon", ":rpmalloc"],
    visibility=["//visibility:public"],
)
