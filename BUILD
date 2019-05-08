cc_binary(
    name = "client",
    srcs = [
        "client.cpp",
        "client.hpp",
        "main.cpp",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "@com_github_grpc_grpc//:grpc++",
        "@entangled//ciri/api/grpc/proto:api_cc_grpc",
    ],
)
