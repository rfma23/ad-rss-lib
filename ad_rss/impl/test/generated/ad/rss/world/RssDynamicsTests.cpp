/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/world/RssDynamics.hpp"

class RssDynamicsTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::RssDynamics value;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
    ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
    valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueAlphaLon.accelMax = valueAlphaLonAccelMax;
    ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
    valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
    valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
    valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
    valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
    valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
    valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
    valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
    value.alphaLon = valueAlphaLon;
    ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
    ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
    valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueAlphaLat.accelMax = valueAlphaLatAccelMax;
    ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
    valueAlphaLatBrakeMin = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
    value.alphaLat = valueAlphaLat;
    ::ad::physics::Distance valueLateralFluctuationMargin(0.);
    value.lateralFluctuationMargin = valueLateralFluctuationMargin;
    ::ad::physics::Duration valueResponseTime(0.);
    valueResponseTime
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    value.responseTime = valueResponseTime;
    ::ad::physics::Speed valueMaxSpeed(-100.);
    value.maxSpeed = valueMaxSpeed;
    mValue = value;
  }

  ::ad::rss::world::RssDynamics mValue;
};

TEST_F(RssDynamicsTests, copyConstruction)
{
  ::ad::rss::world::RssDynamics value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssDynamicsTests, moveConstruction)
{
  ::ad::rss::world::RssDynamics value(std::move(::ad::rss::world::RssDynamics(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssDynamicsTests, copyAssignment)
{
  ::ad::rss::world::RssDynamics value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssDynamicsTests, moveAssignment)
{
  ::ad::rss::world::RssDynamics value;
  value = std::move(::ad::rss::world::RssDynamics(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssDynamicsTests, comparisonOperatorEqual)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssDynamicsTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssDynamicsTests, comparisonOperatorAlphaLonDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::rss::world::LongitudinalRssAccelerationValues alphaLon;
  ::ad::physics::Acceleration alphaLonAccelMax(1e2);
  alphaLon.accelMax = alphaLonAccelMax;
  ::ad::physics::Acceleration alphaLonBrakeMax(1e2);
  alphaLon.brakeMax = alphaLonBrakeMax;
  ::ad::physics::Acceleration alphaLonBrakeMin(1e2);
  alphaLon.brakeMin = alphaLonBrakeMin;
  ::ad::physics::Acceleration alphaLonBrakeMinCorrect(1e2);
  alphaLon.brakeMinCorrect = alphaLonBrakeMinCorrect;
  alphaLon.brakeMax = alphaLon.brakeMin;
  alphaLon.brakeMin = alphaLon.brakeMinCorrect;
  alphaLon.brakeMinCorrect = alphaLon.brakeMin;
  alphaLon.brakeMin = alphaLon.brakeMax;
  valueA.alphaLon = alphaLon;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorAlphaLatDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::rss::world::LateralRssAccelerationValues alphaLat;
  ::ad::physics::Acceleration alphaLatAccelMax(1e2);
  alphaLat.accelMax = alphaLatAccelMax;
  ::ad::physics::Acceleration alphaLatBrakeMin(1e2);
  alphaLat.brakeMin = alphaLatBrakeMin;
  valueA.alphaLat = alphaLat;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorLateralFluctuationMarginDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::physics::Distance lateralFluctuationMargin(1e9);
  valueA.lateralFluctuationMargin = lateralFluctuationMargin;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorResponseTimeDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::physics::Duration responseTime(1e6);
  valueA.responseTime = responseTime;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorMaxSpeedDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::physics::Speed maxSpeed(100.);
  valueA.maxSpeed = maxSpeed;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
