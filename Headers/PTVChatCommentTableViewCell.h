//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVChatTableViewCell.h>

#import <PeriscopeViewer/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, PTVChatCommentTableViewCellContentView;

@interface PTVChatCommentTableViewCell : PTVChatTableViewCell <UIGestureRecognizerDelegate>
{
    _Bool _displayAsBlocked;
    int _blockState;
    PTVChatCommentTableViewCellContentView *_chatCommentCellView;
    struct CGRect _cachedContainerFrame;
}

@property(readonly, nonatomic) int blockState; // @synthesize blockState=_blockState;
@property(nonatomic) struct CGRect cachedContainerFrame; // @synthesize cachedContainerFrame=_cachedContainerFrame;
@property(retain, nonatomic) PTVChatCommentTableViewCellContentView *chatCommentCellView; // @synthesize chatCommentCellView=_chatCommentCellView;
- (void).cxx_destruct;
- (void)_setBlockState;
- (void)setDisplayAsBlockedByLoggedInUser:(_Bool)arg1;
- (void)setIsReplyComment:(_Bool)arg1;
@property(nonatomic) int candyDisplayStyle;
@property(nonatomic) unsigned long long vipBadge;
@property(retain, nonatomic) NSString *username;
- (void)setProfileImageURL:(id)arg1;
- (void)setProfileImageEntity:(id)arg1 type:(unsigned long long)arg2;
@property(retain, nonatomic) NSString *chatMessage;
- (void)setParticipantIndex:(int)arg1;
- (void)setUseLargeChatFont:(_Bool)arg1;
- (id)containerView;
- (void)layoutChatCommentCellView;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

