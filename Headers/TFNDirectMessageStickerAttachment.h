//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageAttachment.h>

#import <T1Twitter/TFNDirectMessageStickerAttachment-Protocol.h>

@class NSString, TFNTwitterSticker;
@protocol TFNDirectMessageContext, TFNDirectMessageEntry;

@interface TFNDirectMessageStickerAttachment : TFNDirectMessageAttachment <TFNDirectMessageStickerAttachment>
{
    TFNTwitterSticker *_sticker;
}

@property(retain, nonatomic) TFNTwitterSticker *sticker; // @synthesize sticker=_sticker;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)standalone;
- (void)setParameterDataForRequestDictionary:(id)arg1;
- (long long)attachmentType;
- (id)initWithSticker:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 messageText:(id)arg2 entities:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) id <TFNDirectMessageContext> context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <TFNDirectMessageEntry> messageEntry;
@property(readonly) Class superclass;

@end
