//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSHTTPURLResponse.h>

@interface NSHTTPURLResponse (TNLAdditions)
+ (id)tnl_parseRetryAfterValueFromString:(id)arg1;
- (long long)tnl_expectedResponseBodyExpandedDataSize;
- (long long)tnl_expectedResponseBodySize;
- (id)tnl_contentEncoding;
- (_Bool)tnl_isEqualToResponse:(id)arg1;
- (id)tnl_parsedRetryAfterValue;
@end

