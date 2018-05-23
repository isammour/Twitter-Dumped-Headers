//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkLayer/NSCopying-Protocol.h>
#import <TwitterNetworkLayer/NSMutableCopying-Protocol.h>
#import <TwitterNetworkLayer/NSSecureCoding-Protocol.h>
#import <TwitterNetworkLayer/TNLRequest-Protocol.h>

@class NSData, NSDictionary, NSInputStream, NSString, NSURL;

@interface TNLHTTPRequest : NSObject <TNLRequest, NSMutableCopying, NSSecureCoding, NSCopying>
{
    NSURL *_URL;
    long long _HTTPMethodValue;
    NSDictionary *_allHTTPHeaderFields;
    NSData *_HTTPBody;
    NSInputStream *_HTTPBodyStream;
    NSString *_HTTPBodyFilePath;
}

+ (id)HEADRequestWithURL:(id)arg1 HTTPHeaderFields:(id)arg2;
+ (id)DELETERequestWithURL:(id)arg1 HTTPHeaderFields:(id)arg2;
+ (id)PUTRequestWithURL:(id)arg1 HTTPHeaderFields:(id)arg2;
+ (id)GETRequestWithURL:(id)arg1 HTTPHeaderFields:(id)arg2;
+ (id)POSTRequestWithURL:(id)arg1 HTTPHeaderFields:(id)arg2 HTTPBodyFilePath:(id)arg3;
+ (id)POSTRequestWithURL:(id)arg1 HTTPHeaderFields:(id)arg2 HTTPBodyStream:(id)arg3;
+ (id)POSTRequestWithURL:(id)arg1 HTTPHeaderFields:(id)arg2 HTTPBody:(id)arg3;
+ (id)HTTPRequestWithRequest:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *HTTPBodyFilePath; // @synthesize HTTPBodyFilePath=_HTTPBodyFilePath;
@property(readonly, nonatomic) NSInputStream *HTTPBodyStream; // @synthesize HTTPBodyStream=_HTTPBodyStream;
@property(readonly, nonatomic) NSData *HTTPBody; // @synthesize HTTPBody=_HTTPBody;
- (id)valueForHTTPHeaderField:(id)arg1;
@property(readonly, nonatomic) NSDictionary *allHTTPHeaderFields; // @synthesize allHTTPHeaderFields=_allHTTPHeaderFields;
@property(readonly, nonatomic) long long HTTPMethodValue; // @synthesize HTTPMethodValue=_HTTPMethodValue;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 HTTPMethodValue:(long long)arg2 HTTPHeaderFields:(id)arg3 HTTPBody:(id)arg4 HTTPBodyStream:(id)arg5 HTTPBodyFilePath:(id)arg6;
- (id)initWithURLRequest:(id)arg1 HTTPBodyFilePath:(id)arg2;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

