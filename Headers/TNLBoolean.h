//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkLayer/TNLURLEncodableObject-Protocol.h>

@class NSString;

@interface TNLBoolean : NSObject <TNLURLEncodableObject>
{
    _Bool _boolValue;
}

@property(readonly, nonatomic) _Bool boolValue; // @synthesize boolValue=_boolValue;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)numberValue;
- (id)stringValue;
- (id)tnl_URLEncodableStringValue;
- (id)initWithBool:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

