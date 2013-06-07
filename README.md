RKTBXMLSerialization
======================

A RestKit XML serialization implementation using the TBXML class.

## Installation

Install via Cocoapods or add the source files to your project. If you are installing directly from source, you will also need to obtain a copy of TBXML from https://github.com/mackoj/TBXML-NSDictionary. 

Once installed, register the serialization in your app delegate (or wherever you handle RestKit setup):

``` objc
#import "RKTBXMLSerialization.h"

[RKMIMETypeSerialization registerClass:[RKTBXMLSerialization class] forMIMEType:@"application/xml"];

```

Note that you may register the class for more than one MIME Type or use an `NSRegularExpression` that matches the MIME Type that you wish to register. For more details, review the [API Documentation](http://restkit.org/api/latest/Classes/RKMIMETypeSerialization.html).
