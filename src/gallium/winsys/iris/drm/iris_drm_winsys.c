/*
 * Copyright © 2017 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#include <unistd.h>
#include <fcntl.h>

#include "util/os_file.h"

#include "renderonly/renderonly.h"
#include "kmsro/drm/kmsro_drm_public.h"
#include "iris_drm_public.h"
#include "iris/iris_screen.h"

extern struct pipe_screen *iris_screen_create(int fd, const struct pipe_screen_config *config);

struct pipe_screen *
iris_drm_screen_create(int fd, const struct pipe_screen_config *config)
{
   return iris_screen_create(fd, config);
}

struct pipe_screen *
iris_screen_create_renderonly(int fd, struct renderonly *ro,
                              const struct pipe_screen_config *config)
{
   struct iris_screen *pscreen;

   pscreen = (struct iris_screen *)iris_screen_create(os_dupfd_cloexec(fd), config);
   if (!pscreen)
      return NULL;

   pscreen->ro = ro;
   pscreen->winsys_fd = ro->kms_fd;

   return &pscreen->base;
}
