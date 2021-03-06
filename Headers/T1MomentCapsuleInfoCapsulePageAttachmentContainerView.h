//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1MomentCapsulePageAttachmentContainerView.h>

@class T1MomentCapsuleInfoView, T1MomentCapsuleInfoViewGuideLayoutDelegate;
@protocol T1MomentViewModel;

@interface T1MomentCapsuleInfoCapsulePageAttachmentContainerView : T1MomentCapsulePageAttachmentContainerView
{
    id <T1MomentViewModel> _momentViewModel;
    T1MomentCapsuleInfoView *_momentCapsuleInfoView;
    T1MomentCapsuleInfoViewGuideLayoutDelegate *_momentCapsuleInfoViewLayoutDelegate;
}

@property(retain, nonatomic) T1MomentCapsuleInfoViewGuideLayoutDelegate *momentCapsuleInfoViewLayoutDelegate; // @synthesize momentCapsuleInfoViewLayoutDelegate=_momentCapsuleInfoViewLayoutDelegate;
@property(retain, nonatomic) T1MomentCapsuleInfoView *momentCapsuleInfoView; // @synthesize momentCapsuleInfoView=_momentCapsuleInfoView;
@property(retain, nonatomic) id <T1MomentViewModel> momentViewModel; // @synthesize momentViewModel=_momentViewModel;
- (void).cxx_destruct;
- (id)initWithMomentViewModel:(id)arg1 foregroundTheme:(id)arg2 capsuleInfoViewTheme:(id)arg3 account:(id)arg4;

@end

