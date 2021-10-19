// Copyright (C) 2021 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "profiler.h"
#include "pps_datasource.h"
#include <cstdlib>

#include <android-base/properties.h>
#include <sys/prctl.h>

#ifdef __cplusplus
extern "C" {
#endif

void try_register_perfetto() {
  using namespace pps;
  PERFETTO_ILOG("--yue-- try_register_perfetto\n");
/*
*/
  std::string enableString = android::base::GetProperty("debug.graphics.gpu.profiler.perfetto", "");
  if (enableString != "1" && enableString != "true") {
    PERFETTO_ILOG("-yue- debug.graphics.gpu.profiler.perfetto is not 1 or true\n");
    return;
  }
  if (!prctl(PR_GET_DUMPABLE, 0, 0, 0, 0)) {
    PERFETTO_ILOG("--yue-- pr get dumpable return\n");
    return;
  }

  PERFETTO_ILOG("-yue- debug.graphics.gpu.profiler.perfetto is %s\n", enableString.c_str());

  perfetto::TracingInitArgs args;
  args.backends = perfetto::kSystemBackend;
  perfetto::Tracing::Initialize(args);
  {
    perfetto::DataSourceDescriptor dsd;
    dsd.set_name("gpu.counters");
    GpuCounterDataSource::Register(dsd);
    PERFETTO_ILOG("--yue-- register gpu.counters\n");
  }

  {
    perfetto::DataSourceDescriptor dsd;
    dsd.set_name("gpu.renderstages");
    GpuRenderStageDataSource::Register(dsd);
    PERFETTO_ILOG("--yue-- register gpu.renderstages\n");
  }
}

void *trace_gpu_counters() {
  using namespace pps;
  PERFETTO_ILOG("--yue-- trace_gpu_counters\n");
/*
*/
  std::string enableString = android::base::GetProperty("debug.graphics.gpu.profiler.perfetto", "");
  if (enableString != "1" && enableString != "true") {
    PERFETTO_ILOG("-yue- debug.graphics.gpu.profiler.perfetto is not 1 or true\n");
    return NULL;
  }

  PERFETTO_ILOG("-yue- debug.graphics.gpu.profiler.perfetto is %s\n", enableString.c_str());
  std::string driver_name = Driver::default_driver_name();

  while (true) {
     pps::GpuCounterDataSource::wait_started();
     pps::GpuCounterDataSource::Trace(GpuCounterDataSource::trace_callback);
  }

  return NULL;
}

#ifdef __cplusplus
} // extern "C"
#endif
