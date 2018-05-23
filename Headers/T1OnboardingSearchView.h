//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/UITextFieldDelegate-Protocol.h>

@class NSString, T1OnboardingSearchField, TFSTimer, UIButton;
@protocol T1OnboardingSearchViewDelegate;

@interface T1OnboardingSearchView : UIView <UITextFieldDelegate>
{
    _Bool _shouldCenterPlaceholderWhenInactive;
    _Bool _shouldShowCancel;
    id <T1OnboardingSearchViewDelegate> _delegate;
    NSString *_text;
    NSString *_placeholder;
    long long _returnKeyType;
    T1OnboardingSearchField *_searchField;
    TFSTimer *_updatingTextTimer;
    UIButton *_cancelButton;
    struct UIEdgeInsets _contentEdgeInsets;
}

+ (double)preferredHeightWithContentEdgeInsets:(struct UIEdgeInsets)arg1;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) TFSTimer *updatingTextTimer; // @synthesize updatingTextTimer=_updatingTextTimer;
@property(retain, nonatomic) T1OnboardingSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) _Bool shouldShowCancel; // @synthesize shouldShowCancel=_shouldShowCancel;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) _Bool shouldCenterPlaceholderWhenInactive; // @synthesize shouldCenterPlaceholderWhenInactive=_shouldCenterPlaceholderWhenInactive;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak id <T1OnboardingSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_t1_private_invalidateUpdatingTextTimer;
- (void)_t1_private_updateText;
- (void)_t1_timer_didFireUpdatingTextTimer:(id)arg1;
- (void)_t1_notification_searchFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)_t1_action_didCancel:(id)arg1;
- (CDUnknownBlockType)_t1_cancelButtonUpdateBlockForAlpha:(double)arg1;
- (void)_t1_updateSearchFieldAnimated:(_Bool)arg1;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)clear;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 returnKeyType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

