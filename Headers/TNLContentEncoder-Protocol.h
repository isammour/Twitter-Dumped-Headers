//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkUtilities/NSObject-Protocol.h>

@class NSData, NSString;

@protocol TNLContentEncoder <NSObject>
- (NSData *)tnl_encodeHTTPBody:(NSData *)arg1 error:(out id *)arg2;
- (NSString *)tnl_contentEncodingType;
@end

