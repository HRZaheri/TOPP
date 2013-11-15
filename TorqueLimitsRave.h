// -*- coding: utf-8 -*-
// Copyright (C) 2013 Quang-Cuong Pham <cuong.pham@normalesup.org>
//
// This file is part of the Time-Optimal Path Parameterization (TOPP) library.
// TOPP is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.


#include <openrave-core.h>

#include "TOPP.h"
#include "TorqueLimits.h"
#include "python/bindings/openravepy_int.h"


namespace TOPP {

class TorqueLimitsRave : public TorqueLimits {
public:
    TorqueLimitsRave(const std::string& constraintsstring, Trajectory* ptraj, const Tunings& tunings, RobotBasePtr probot);

};
}