//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNDirectMessagePlayable, UIImage;
@protocol TFNDirectMessageEntry, TFNDirectMessageMediaAttachment;

@interface T1DirectMessageConversationMessageEntrySlideData : NSObject
{
    id <TFNDirectMessageEntry> _messageEntry;
    id <TFNDirectMessageMediaAttachment> _mediaAttachment;
    UIImage *_previewImage;
}

@property(readonly, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(copy, nonatomic) id <TFNDirectMessageMediaAttachment> mediaAttachment; // @synthesize mediaAttachment=_mediaAttachment;
@property(copy, nonatomic) id <TFNDirectMessageEntry> messageEntry; // @synthesize messageEntry=_messageEntry;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFNDirectMessagePlayable *directMessagePlayable;
- (id)initWithMessageEntry:(id)arg1 mediaAttachment:(id)arg2 previewImage:(id)arg3;
- (id)init;

@end

