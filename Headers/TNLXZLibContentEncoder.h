//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkUtilities/TNLContentEncoder-Protocol.h>

@class NSString;

@interface TNLXZLibContentEncoder : NSObject <TNLContentEncoder>
{
    unsigned int _mode;
}

@property(readonly, nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (id)tnl_encodeHTTPBody:(id)arg1 error:(out id *)arg2;
- (id)tnl_contentEncodingType;
- (id)initWithMode:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
