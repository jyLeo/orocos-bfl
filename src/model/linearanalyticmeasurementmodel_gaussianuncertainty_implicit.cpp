// $Id: linearanalyticmeasurementmodel_gaussianuncertainty_implicit.cpp 29495 2008-08-13 12:57:49Z tdelaet $
// Copyright (C) 2002 Klaas Gadeyne <first dot last at gmail dot com>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation; either version 2.1 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
//

#include "linearanalyticmeasurementmodel_gaussianuncertainty_implicit.h"
#include "../sample/sample.h"
#include <cassert>

namespace BFL
{

  LinearAnalyticMeasurementModelGaussianUncertainty_Implicit::LinearAnalyticMeasurementModelGaussianUncertainty_Implicit
  ( LinearAnalyticConditionalGaussian* pdf)
    : LinearAnalyticMeasurementModelGaussianUncertainty( pdf )
  {}

  LinearAnalyticMeasurementModelGaussianUncertainty_Implicit::LinearAnalyticMeasurementModelGaussianUncertainty_Implicit
  ()
    : LinearAnalyticMeasurementModelGaussianUncertainty( NULL )
  {}


//  LinearAnalyticMeasurementModelGaussianUncertainty_Implicit::LinearAnalyticMeasurementModelGaussianUncertainty_Implicit
//  ( const LinearAnalyticMeasurementModelGaussianUncertainty_Implicit& l )
//    : LinearAnalyticMeasurementModelGaussianUncertainty( new LinearConditionalGaussian(l.MeasurementPdfGet()) )
//  {}


  LinearAnalyticMeasurementModelGaussianUncertainty_Implicit::~LinearAnalyticMeasurementModelGaussianUncertainty_Implicit()
  {}


}
