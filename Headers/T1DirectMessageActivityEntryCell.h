//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DirectMessageAbstractConversationEntryCell.h>

#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSString, T1DirectMessageActivityEntryViewModel, TFNAttributedTextView, UIImageView;

@interface T1DirectMessageActivityEntryCell : T1DirectMessageAbstractConversationEntryCell <TFNAttributedTextViewDelegate>
{
    TFNAttributedTextView *_activityLabel;
    UIImageView *_accessoryImageView;
}

@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(retain, nonatomic) TFNAttributedTextView *activityLabel; // @synthesize activityLabel=_activityLabel;
- (void).cxx_destruct;
- (_Bool)accessibilityActivate;
- (void)_updateAccessoryImageViewWithActivityEntryViewModel:(id)arg1;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)layoutSubviews;
@property(retain, nonatomic) T1DirectMessageActivityEntryViewModel *entryViewModel; // @dynamic entryViewModel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

