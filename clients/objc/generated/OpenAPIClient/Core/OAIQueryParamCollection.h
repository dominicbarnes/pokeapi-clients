#import <Foundation/Foundation.h>

/**
* 
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 20220523
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


@interface OAIQueryParamCollection : NSObject

@property(nonatomic, readonly) NSArray* values;
@property(nonatomic, readonly) NSString* format;

- (id) initWithValuesAndFormat: (NSArray*) values
                        format: (NSString*) format;

@end
