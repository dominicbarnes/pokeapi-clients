/*
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using Xunit;

using Org.OpenAPITools.Client;
using Org.OpenAPITools.Api;

namespace Org.OpenAPITools.Test.Api
{
    /// <summary>
    ///  Class for testing PalParkAreaApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class PalParkAreaApiTests : IDisposable
    {
        private PalParkAreaApi instance;

        public PalParkAreaApiTests()
        {
            instance = new PalParkAreaApi();
        }

        public void Dispose()
        {
            // Cleanup when everything is done.
        }

        /// <summary>
        /// Test an instance of PalParkAreaApi
        /// </summary>
        [Fact]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsType' PalParkAreaApi
            //Assert.IsType<PalParkAreaApi>(instance);
        }

        /// <summary>
        /// Test PalParkAreaList
        /// </summary>
        [Fact]
        public void PalParkAreaListTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //int? limit = null;
            //int? offset = null;
            //var response = instance.PalParkAreaList(limit, offset);
            //Assert.IsType<string>(response);
        }

        /// <summary>
        /// Test PalParkAreaRead
        /// </summary>
        [Fact]
        public void PalParkAreaReadTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //int id = null;
            //var response = instance.PalParkAreaRead(id);
            //Assert.IsType<string>(response);
        }
    }
}
