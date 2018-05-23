//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterCardViewLayoutState.h>

@class T1NativeConversationCardDetailsViewLayoutState;

@interface T1NativeConversationCardViewLayoutState : TFNTwitterCardViewLayoutState
{
    _Bool _hasVoted;
    double _borderWidth;
    T1NativeConversationCardDetailsViewLayoutState *_detailsLayoutState;
    struct CGRect _borderSeparatorFrame;
    struct CGRect _imageFrame;
    struct CGRect _imageHighlightFrame;
    struct CGRect _detailsFrame;
}

@property(nonatomic) _Bool hasVoted; // @synthesize hasVoted=_hasVoted;
@property(retain, nonatomic) T1NativeConversationCardDetailsViewLayoutState *detailsLayoutState; // @synthesize detailsLayoutState=_detailsLayoutState;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) struct CGRect detailsFrame; // @synthesize detailsFrame=_detailsFrame;
@property(nonatomic) struct CGRect imageHighlightFrame; // @synthesize imageHighlightFrame=_imageHighlightFrame;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
@property(nonatomic) struct CGRect borderSeparatorFrame; // @synthesize borderSeparatorFrame=_borderSeparatorFrame;
- (void).cxx_destruct;
- (_Bool)isLayoutStateValidForCardContext:(id)arg1;

@end
