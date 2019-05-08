load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

git_repository(
    name = "entangled",
    commit = "afb2a4b72b40d2e3134961bc7e97cbd138da2491",
    remote = "https://github.com/thibault-martinez/entangled.git",
)

http_archive(
    name = "com_github_grpc_grpc",
    sha256 = "ba8b08a697b66e14af35da07753583cf32ff3d14dcd768f91b1bbe2e6c07c349",
    strip_prefix = "grpc-1.20.1",
    url = "https://github.com/grpc/grpc/archive/v1.20.1.tar.gz",
)

load("@com_github_grpc_grpc//bazel:grpc_deps.bzl", "grpc_deps")

grpc_deps()
