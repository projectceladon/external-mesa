/*
 * Copyright © 2019-2021 Collabora, Ltd.
 * Author: Antonio Caggiano <antonio.caggiano@collabora.com>
 * Author: Robert Beckett <bob.beckett@collabora.com>
 * Author: Corentin Noël <corentin.noel@collabora.com>
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include "pps.h"
#include "pps_driver.h"

namespace pps
{
struct GpuIncrementalState {
   bool was_cleared = true;
};

struct GpuDataSourceTraits : public perfetto::DefaultDataSourceTraits {
   using IncrementalStateType = GpuIncrementalState;
};

class Driver;

/// @brief This datasource samples performance counters at a specified rate.
/// Once the data is available, it sends a protobuf packet to the perfetto service.
/// At the very beginning, it sends a description of the counters.
/// After that, it sends counter values using the IDs set in the description.
class GpuCounterDataSource : public perfetto::DataSource<GpuCounterDataSource, GpuDataSourceTraits>
{
   public:
   void OnSetup(const SetupArgs &args) override;
   void OnStart(const StartArgs &args) override;
   void OnStop(const StopArgs &args) override;

   /// Blocks until the data source starts
   static void wait_started();

   /// @brief Perfetto trace callback
   static void trace_callback(TraceContext ctx);
   static void register_data_source(const std::string &driver_name);

   void trace(TraceContext &ctx);

   private:
   State state = State::Stop;

   /// Time between trace callbacks
   std::chrono::nanoseconds time_to_sleep = std::chrono::nanoseconds(1000000);

   /// Used to check whether the datasource is quick enough
   std::chrono::nanoseconds time_to_trace;

   /// A data source supports one driver at a time, but if you need more
   /// than one gpu datasource you can just run another producer
   Driver *driver = nullptr;

   /// Timestamp of packet sent with counter descriptors
   uint64_t descriptor_timestamp = 0;
};

class GpuRenderStageDataSource: public perfetto::DataSource<GpuRenderStageDataSource> {
 public:
  void OnSetup(const SetupArgs& args) override {
    PERFETTO_ILOG("GpuRenderStageDataSource OnSetup called, name: %s",
      args.config->name().c_str());
    first = true;
  }

  void OnStart(const StartArgs&) override {
    PERFETTO_ILOG("GpuRenderStageDataSource OnStart called");
  }

  void OnStop(const StopArgs&) override {
    PERFETTO_ILOG("GpuRenderStageDataSource OnStop called");
  }

  bool first = true;
  uint64_t count = 0;
};

} // namespace pps
