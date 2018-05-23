//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNTouchDownGestureRecognizer, UITapGestureRecognizer;

@interface T1MomentCapsulePageAttachmentContainerView : UIView
{
    CDUnknownBlockType _tapAction;
    UIView *_containedView;
    TFNTouchDownGestureRecognizer *_pressDownGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) TFNTouchDownGestureRecognizer *pressDownGestureRecognizer; // @synthesize pressDownGestureRecognizer=_pressDownGestureRecognizer;
@property(retain, nonatomic) UIView *containedView; // @synthesize containedView=_containedView;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
- (void).cxx_destruct;
- (void)_didTap:(id)arg1;
- (void)_didPress:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithContainedView:(id)arg1 foregroundTheme:(id)arg2;

@end
