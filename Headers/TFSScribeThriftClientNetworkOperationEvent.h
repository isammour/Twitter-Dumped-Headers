//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribeThrift/NSCoding-Protocol.h>
#import <TFSScribeThrift/TBase-Protocol.h>

@class NSString, TFSScribeThriftClientNetworkOperation, TFSScribeThriftVersionedCommonHeader;

@interface TFSScribeThriftClientNetworkOperationEvent : NSObject <TBase, NSCoding>
{
    _Bool _commonHeaderIsSet;
    _Bool _operationIsSet;
    TFSScribeThriftVersionedCommonHeader *_commonHeader;
    TFSScribeThriftClientNetworkOperation *_operation;
}

@property(readonly, nonatomic) _Bool operationIsSet; // @synthesize operationIsSet=_operationIsSet;
@property(retain, nonatomic) TFSScribeThriftClientNetworkOperation *operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) _Bool commonHeaderIsSet; // @synthesize commonHeaderIsSet=_commonHeaderIsSet;
@property(retain, nonatomic) TFSScribeThriftVersionedCommonHeader *commonHeader; // @synthesize commonHeader=_commonHeader;
- (void).cxx_destruct;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommonHeader:(id)arg1 operation:(id)arg2;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

