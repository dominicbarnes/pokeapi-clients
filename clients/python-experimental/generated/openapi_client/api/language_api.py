# coding: utf-8

"""

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    The version of the OpenAPI document: 20220523
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""

from openapi_client.api_client import ApiClient
from openapi_client.api.language_api_endpoints.language_list import LanguageList
from openapi_client.api.language_api_endpoints.language_read import LanguageRead


class LanguageApi(
    LanguageList,
    LanguageRead,
    ApiClient,
):
    """NOTE: This class is auto generated by OpenAPI Generator
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """
    pass
