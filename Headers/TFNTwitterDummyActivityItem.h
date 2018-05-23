//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterActivityItem.h>

#import <T1Twitter/TFNTwitterActivityStreamItem-Protocol.h>
#import <T1Twitter/TFNTwitterDummyObject-Protocol.h>

@class NSDate, NSString, TFNTwitterActivityStream;

@interface TFNTwitterDummyActivityItem : TFNTwitterActivityItem <TFNTwitterActivityStreamItem, TFNTwitterDummyObject>
{
    _Bool _loading;
    long long _dummyObjectType;
    NSString *_messageText;
    NSString *_messageSubtext;
    CDUnknownBlockType _actionBlock;
    TFNTwitterActivityStream *_stream;
}

+ (id)dummyItemForStream:(id)arg1;
@property(nonatomic) __weak TFNTwitterActivityStream *stream; // @synthesize stream=_stream;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *messageSubtext; // @synthesize messageSubtext=_messageSubtext;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(nonatomic) long long dummyObjectType; // @synthesize dummyObjectType=_dummyObjectType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isNotADummyActivityItem;
- (long long)type;

// Remaining properties
@property(readonly, nonatomic) NSDate *createdAt;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

