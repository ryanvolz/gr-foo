/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(packet_dropper.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(c324ec3cc59fd3973f47d4c8193587cb)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <foo/packet_dropper.h>
// pydoc.h is automatically generated in the build directory
#include <packet_dropper_pydoc.h>

void bind_packet_dropper(py::module& m)
{

    using packet_dropper    = ::gr::foo::packet_dropper;


    py::class_<packet_dropper, gr::block, gr::basic_block,
        std::shared_ptr<packet_dropper>>(m, "packet_dropper", D(packet_dropper))

        .def(py::init(&packet_dropper::make),
           py::arg("drop_rate"),
           py::arg("seed"),
           D(packet_dropper,make)
        )
        



        ;




}







