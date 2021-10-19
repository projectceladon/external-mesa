/*
 * Copyright © 2021 Collabora, Ltd.
 * Author: Antonio Caggiano <antonio.caggiano@collabora.com>
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <optional>
#include <string>
#include <vector>

#include <dev/gen_device_info.h>
#include <perf/gen_perf.h>
#include <perf/gen_perf_query.h>

namespace pps
{
int perf_ioctl(int fd, unsigned long request, void *arg);

class IntelPerf
{
   public:
   IntelPerf(int drm_fd);

   IntelPerf(const IntelPerf &) = delete;
   IntelPerf &operator=(const IntelPerf &) = delete;

   IntelPerf(IntelPerf &&);
   IntelPerf &operator=(IntelPerf &&) noexcept;

   ~IntelPerf();

   std::optional<struct gen_perf_query_info> find_query_by_name(const std::string &name) const;

   std::vector<struct gen_perf_query_info*> get_queries() const;

   bool open(uint64_t sampling_period_ns);
   void close();

   bool oa_stream_ready() const;
   ssize_t read_oa_stream(void *buf, size_t bytes) const;

   int drm_fd = -1;

   void *ralloc_ctx = nullptr;
   void *ralloc_cfg = nullptr;

   struct gen_perf_context *ctx = nullptr;
   struct gen_perf_config *cfg = nullptr;

   struct gen_device_info devinfo = {};

   std::optional<struct gen_perf_query_info> query = std::nullopt;
};

} // namespace pps
