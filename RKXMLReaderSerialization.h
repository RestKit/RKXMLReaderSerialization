//
//  RKXMLReaderSerialization.h
//  RestKit
//
//  Created by Christopher Swasey on 1/24/12.
//  Copyright (c) 2009-2012 RestKit. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

/**
 Provides a basic XML implementation using an adapted version
 of the XMLReader class by "Insert-Witty-Name" available at:
 https://github.com/RestKit/XML-to-NSDictionary

 `RKXMLReaderSerialization` will parse an XML document into an NSDictionary
 representation suitable for use with RestKit's key-value coding based
 object mapping implementation.

 XML attributes are represented as keys in a dictionary.

 **NOTE** When an XML tag is parsed containing both XML attributes and
 an enclosed text node, the value of the text node will be inserted in
 the parsed dictionary at the `@"text"` key.
 */

#import "XMLReader.h"
#import <RestKit/Support/RKSerialization.h>

@interface RKXMLReaderSerialization : NSObject <RKSerialization>
@end
