cc_library(
    name="libcommon",
    hdrs=glob(["*.h", "*.hpp"], exclude=["tracy_lz4hc.hpp"]) +
         glob(["*.cpp"], exclude=["tracy_lz4hc.cpp"]),
    strip_include_prefix="",
    include_prefix="common/",
    copts=["-ldl"],
    deps=[],
    visibility=["//visibility:public"],
)
