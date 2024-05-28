Fetch submodule:

NOTE: git submodule not used because AOSP doesn't allow it.

git clone https://fuchsia.googlesource.com/fuchsia-infra-bazel-rules fuchsia-build/third_party/fuchsia-infra-bazel-rules

Bootstrap:

fuchsia-build/third_party/fuchsia-infra-bazel-rules/scripts/bootstrap.sh

Fetch and build the SDK:

tools/bazel build @fuchsia_sdk//:fuchsia_toolchain_sdk
