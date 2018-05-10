/* $Id$
 *
 * OpenMAMA: The open middleware agnostic messaging API
 * Copyright (C) 2011 NYSE Technologies, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */
/*
 * Description	:	This test will check the mamaPrice type to ensure that the
 *                  setting the precision will not cause the price value to be
 *                  truncated. 
 */

/* ************************************************************************* */
/* Includes */
/* ************************************************************************* */
#include "MamaPriceTest.h"

/* ************************************************************************* */
/* Defines */
/* ************************************************************************* */
#ifdef WIN32
#define WMPRICE_LARGE_INT32_FORMAT_SPECIFIER "%I32d"
#define WMPRICE_LARGE_INT64_FORMAT_SPECIFIER "%I64d"
#else
#define WMPRICE_LARGE_INT32_FORMAT_SPECIFIER "%ld"
#define WMPRICE_LARGE_INT64_FORMAT_SPECIFIER "%lld"
#endif

/* ************************************************************************* */
/* Construction and Destruction */
/* ************************************************************************* */

MamaPriceTest::MamaPriceTest(void)
{
}

MamaPriceTest::~MamaPriceTest(void)
{
}

/* ************************************************************************* */
/* Setup and Teardown */
/* ************************************************************************* */

void MamaPriceTest::SetUp(void)
{
	// Create a new mama price
    //ASSERT_EQ(mamaPrice_create(&m_price), MAMA_STATUS_OK);
    m_price = new MamaPrice();

    // Set the value of the price	
    //ASSERT_EQ(mamaPrice_setValue(m_price, 4000000000), MAMA_STATUS_OK);
    m_price->setValue(4000000000);
}

void MamaPriceTest::TearDown(void)
{
	// Delete the price
	if(m_price != NULL)
	{
        //ASSERT_EQ(mamaPrice_destroy(m_price), MAMA_STATUS_OK);
        delete m_price;
        m_price = NULL;
	}
    ASSERT_TRUE(m_price == NULL);
}

/* ************************************************************************* */
/* Test Functions */
/* ************************************************************************* +*/
TEST_F(MamaPriceTest, SetPrecisionInt)
{
    // Set the precision
    //ASSERT_EQ(mamaPrice_setPrecision(m_price, MAMA_PRICE_PREC_INT), MAMA_STATUS_OK);
    m_price->setPrecision(MAMA_PRICE_PREC_INT);
    
    // Get the value as a double
    double doubleValue = 0;
    //ASSERT_EQ(mamaPrice_getValue(m_price, &doubleValue), MAMA_STATUS_OK);
    doubleValue = m_price->getValue();

    // Format the double value as a string using an integer flag
    char doubleString[20] = "";
    sprintf(doubleString, "%lld", (long long int)doubleValue);

    // Get the value as a string
    char stringValue[20] = "";
    //ASSERT_EQ(mamaPrice_getAsString(m_price, stringValue, 19), MAMA_STATUS_OK);
    m_price->getAsString(stringValue, 19);

    // Compare the strings
    ASSERT_STREQ(stringValue, doubleString);    
}

TEST_F(MamaPriceTest, SetPrecisionDiv2)
{
    // Set the precision
    //ASSERT_EQ(mamaPrice_setPrecision(m_price, MAMA_PRICE_PREC_DIV_2), MAMA_STATUS_OK);
    m_price->setPrecision(MAMA_PRICE_PREC_DIV_2);
    
    // Get the value as a double
    double doubleValue = 0;
    //ASSERT_EQ(mamaPrice_getValue(m_price, &doubleValue), MAMA_STATUS_OK);
    doubleValue = m_price->getValue();

    // Format the double value as a string using an integer flag
    char doubleString[20] = "";
    sprintf(doubleString, "%lld", (long long int)doubleValue);

    // Get the value as a string
    char stringValue[20] = "";
    //ASSERT_EQ(mamaPrice_getAsString(m_price, stringValue, 19), MAMA_STATUS_OK);
    m_price->getAsString(stringValue, 19);

    // Compare the strings
    ASSERT_STREQ(stringValue, doubleString);    
}

TEST_F(MamaPriceTest, SetPrecisionDiv4)
{
    // Set the precision
    //ASSERT_EQ(mamaPrice_setPrecision(m_price, MAMA_PRICE_PREC_DIV_4), MAMA_STATUS_OK);
    m_price->setPrecision(MAMA_PRICE_PREC_DIV_4);
    
    // Get the value as a double
    double doubleValue = 0;
    //ASSERT_EQ(mamaPrice_getValue(m_price, &doubleValue), MAMA_STATUS_OK);
    doubleValue = m_price->getValue();

    // Format the double value as a string using an integer flag
    char doubleString[20] = "";
    sprintf(doubleString, "%lld", (long long int)doubleValue);

    // Get the value as a string
    char stringValue[20] = "";
    //ASSERT_EQ(mamaPrice_getAsString(m_price, stringValue, 19), MAMA_STATUS_OK);
    m_price->getAsString(stringValue, 19);

    // Compare the strings
    ASSERT_STREQ(stringValue, doubleString);    
}

TEST_F(MamaPriceTest, SetPrecisionDiv8)
{
    // Set the precision
    //ASSERT_EQ(mamaPrice_setPrecision(m_price, MAMA_PRICE_PREC_DIV_8), MAMA_STATUS_OK);
    m_price->setPrecision(MAMA_PRICE_PREC_DIV_8);
    
    // Get the value as a double
    double doubleValue = 0;
    //ASSERT_EQ(mamaPrice_getValue(m_price, &doubleValue), MAMA_STATUS_OK);
    doubleValue = m_price->getValue();

    // Format the double value as a string using an integer flag
    char doubleString[20] = "";
    sprintf(doubleString, "%lld", (long long int)doubleValue);

    // Get the value as a string
    char stringValue[20] = "";
    //ASSERT_EQ(mamaPrice_getAsString(m_price, stringValue, 19), MAMA_STATUS_OK);
    m_price->getAsString(stringValue, 19);

    // Compare the strings
    ASSERT_STREQ(stringValue, doubleString);    
}

TEST_F(MamaPriceTest, SetPrecisionDiv16)
{
    // Set the precision
    //ASSERT_EQ(mamaPrice_setPrecision(m_price, MAMA_PRICE_PREC_DIV_16), MAMA_STATUS_OK);
    m_price->setPrecision(MAMA_PRICE_PREC_DIV_16);
    
    // Get the value as a double
    double doubleValue = 0;
    //ASSERT_EQ(mamaPrice_getValue(m_price, &doubleValue), MAMA_STATUS_OK);
    doubleValue = m_price->getValue();

    // Format the double value as a string using an integer flag
    char doubleString[20] = "";
    sprintf(doubleString, "%lld", (long long int)doubleValue);

    // Get the value as a string
    char stringValue[20] = "";
    //ASSERT_EQ(mamaPrice_getAsString(m_price, stringValue, 19), MAMA_STATUS_OK);
    m_price->getAsString(stringValue, 19);

    // Compare the strings
    ASSERT_STREQ(stringValue, doubleString);    
}

TEST_F(MamaPriceTest, SetPrecisionDiv32)
{
    // Set the precision
    //ASSERT_EQ(mamaPrice_setPrecision(m_price, MAMA_PRICE_PREC_DIV_32), MAMA_STATUS_OK);
    m_price->setPrecision(MAMA_PRICE_PREC_DIV_32);
    
    // Get the value as a double
    double doubleValue = 0;
    //ASSERT_EQ(mamaPrice_getValue(m_price, &doubleValue), MAMA_STATUS_OK);
    doubleValue = m_price->getValue();

    // Format the double value as a string using an integer flag
    char doubleString[20] = "";
    sprintf(doubleString, "%lld", (long long int)doubleValue);

    // Get the value as a string
    char stringValue[20] = "";
    //ASSERT_EQ(mamaPrice_getAsString(m_price, stringValue, 19), MAMA_STATUS_OK);
    m_price->getAsString(stringValue, 19);

    // Compare the strings
    ASSERT_STREQ(stringValue, doubleString);    
}

TEST_F(MamaPriceTest, SetPrecisionDiv64)
{
    // Set the precision
    //ASSERT_EQ(mamaPrice_setPrecision(m_price, MAMA_PRICE_PREC_DIV_64), MAMA_STATUS_OK);
    m_price->setPrecision(MAMA_PRICE_PREC_DIV_64);
    
    // Get the value as a double
    double doubleValue = 0;
    //ASSERT_EQ(mamaPrice_getValue(m_price, &doubleValue), MAMA_STATUS_OK);
    doubleValue = m_price->getValue();

    // Format the double value as a string using an integer flag
    char doubleString[20] = "";
    sprintf(doubleString, "%lld", (long long int)doubleValue);

    // Get the value as a string
    char stringValue[20] = "";
    //ASSERT_EQ(mamaPrice_getAsString(m_price, stringValue, 19), MAMA_STATUS_OK);
    m_price->getAsString(stringValue, 19);

    // Compare the strings
    ASSERT_STREQ(stringValue, doubleString);    
}

TEST_F(MamaPriceTest, SetPrecisionDiv128)
{
    // Set the precision
    //ASSERT_EQ(mamaPrice_setPrecision(m_price, MAMA_PRICE_PREC_DIV_128), MAMA_STATUS_OK);
    m_price->setPrecision(MAMA_PRICE_PREC_DIV_128);
    
    // Get the value as a double
    double doubleValue = 0;
    //ASSERT_EQ(mamaPrice_getValue(m_price, &doubleValue), MAMA_STATUS_OK);
    doubleValue = m_price->getValue();

    // Format the double value as a string using an integer flag
    char doubleString[20] = "";
    sprintf(doubleString, "%lld", (long long int)doubleValue);

    // Get the value as a string
    char stringValue[20] = "";
    //ASSERT_EQ(mamaPrice_getAsString(m_price, stringValue, 19), MAMA_STATUS_OK);
    m_price->getAsString(stringValue, 19);

    // Compare the strings
    ASSERT_STREQ(stringValue, doubleString);    
}

TEST_F(MamaPriceTest, SetPrecisionDiv256)
{
    // Set the precision
    // ASSERT_EQ(mamaPrice_setPrecision(m_price, MAMA_PRICE_PREC_DIV_256), MAMA_STATUS_OK);
    m_price->setPrecision(MAMA_PRICE_PREC_DIV_256);
    // Get the value as a double
    double doubleValue = 0;
    //ASSERT_EQ(mamaPrice_getValue(m_price, &doubleValue), MAMA_STATUS_OK);
    doubleValue = m_price->getValue();

    // Format the double value as a string using an integer flag
    char doubleString[20] = "";
    sprintf(doubleString, "%lld", (long long int)doubleValue);

    // Get the value as a string
    char stringValue[20] = "";
    //ASSERT_EQ(mamaPrice_getAsString(m_price, stringValue, 19), MAMA_STATUS_OK);
    m_price->getAsString(stringValue, 19);

    // Compare the strings
    ASSERT_STREQ(stringValue, doubleString);    
}

TEST_F(MamaPriceTest, SetPrecisionDiv512)
{
    // Set the precision
    //ASSERT_EQ(mamaPrice_setPrecision(m_price, MAMA_PRICE_PREC_DIV_512), MAMA_STATUS_OK);
    m_price->setPrecision(MAMA_PRICE_PREC_DIV_512);
    
    // Get the value as a double
    double doubleValue = 0;
    //ASSERT_EQ(mamaPrice_getValue(m_price, &doubleValue), MAMA_STATUS_OK);
    doubleValue = m_price->getValue();

    // Format the double value as a string using an integer flag
    char doubleString[20] = "";
    sprintf(doubleString, "%lld", (long long int)doubleValue);

    // Get the value as a string
    char stringValue[20] = "";
    //ASSERT_EQ(mamaPrice_getAsString(m_price, stringValue, 19), MAMA_STATUS_OK);
    m_price->getAsString(stringValue, 19);

    // Compare the strings
    ASSERT_STREQ(stringValue, doubleString);    
}

TEST_F(MamaPriceTest, SetFromString)
{
    MamaPrice*  m_price;
    const char* value       = "123.45";
    double      doubleValue = 0.0;

    m_price = new MamaPrice();

    m_price->setFromString(value);

    doubleValue = m_price->getValue();

    ASSERT_EQ(doubleValue, atof(value));
}

TEST_F(MamaPriceTest, SetFromStringLargeValue)
{
    MamaPrice*  m_price;
    const char* value       = "123.456789012345";
    double      doubleValue = 0.0;

    m_price = new MamaPrice();

    m_price->setFromString(value);

    doubleValue = m_price->getValue();

    ASSERT_EQ(doubleValue, atof(value));
}

TEST_F(MamaPriceTest, SetFromStringInvalidPrice)
{
    MamaPrice*  m_price;
    const char* value       = "MY PRICE";
    double      doubleValue = 0.0;

    m_price = new MamaPrice();

    m_price->setFromString(value);

    doubleValue = m_price->getValue();

    ASSERT_EQ(doubleValue, atof(value));
}

TEST_F(MamaPriceTest, SetIsInvalidPriceTestValidPrice)
{
    // Set the precision
    m_priceDp->setPrecision(MAMA_PRICE_PREC_100);

    // Set the price as valid
    m_priceDp->setIsInvalidPrice(false);
    
    // Get the value as a string
    char stringValue[50] = "";
    if (m_priceDp->getIsInvalidPrice())
    {
        snprintf (stringValue, 50, "N/A");
    }
    else
    {
        m_priceDp->getAsString(stringValue, 49);
    }

    // Compare the strings
    ASSERT_STREQ(stringValue, "1.12");
}

TEST_F(MamaPriceTest, SetIsInvalidPriceTestInValidPrice)
{
    // Set the precision
    m_priceDp->setPrecision(MAMA_PRICE_PREC_100);

    // Set the price as valid
    m_priceDp->setIsInvalidPrice(true);
    
    // Get the value as a string
    char stringValue[50] = "";
    if (m_priceDp->getIsInvalidPrice())
    {
        snprintf (stringValue, 50, "N/A");
    }
    else
    {
        m_priceDp->getAsString(stringValue, 49);
    }

    // Compare the strings
    ASSERT_STREQ(stringValue, "N/A");
}
