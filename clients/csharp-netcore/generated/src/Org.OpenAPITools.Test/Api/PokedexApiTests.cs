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
    ///  Class for testing PokedexApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class PokedexApiTests : IDisposable
    {
        private PokedexApi instance;

        public PokedexApiTests()
        {
            instance = new PokedexApi();
        }

        public void Dispose()
        {
            // Cleanup when everything is done.
        }

        /// <summary>
        /// Test an instance of PokedexApi
        /// </summary>
        [Fact]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsType' PokedexApi
            //Assert.IsType<PokedexApi>(instance);
        }

        /// <summary>
        /// Test PokedexList
        /// </summary>
        [Fact]
        public void PokedexListTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //int? limit = null;
            //int? offset = null;
            //var response = instance.PokedexList(limit, offset);
            //Assert.IsType<string>(response);
        }

        /// <summary>
        /// Test PokedexRead
        /// </summary>
        [Fact]
        public void PokedexReadTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //int id = null;
            //var response = instance.PokedexRead(id);
            //Assert.IsType<string>(response);
        }
    }
}
