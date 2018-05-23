//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1ConversationContextLayoutState-Protocol.h>
#import <T1Twitter/T1SocialContextLayoutState-Protocol.h>

@class NSString, T1StatusAuthorViewLayoutState, TFNLayoutMetrics, TFNTwitterAccount;
@protocol T1StatusViewModel;

@interface T1QuotedStatusViewLayoutState : NSObject <T1SocialContextLayoutState, T1ConversationContextLayoutState>
{
    _Bool socialTextMaxLinesExceeded;
    _Bool _bodyMayHaveHashflags;
    id <T1StatusViewModel> _viewModel;
    unsigned long long _options;
    TFNTwitterAccount *_account;
    TFNLayoutMetrics *_layoutMetrics;
    T1StatusAuthorViewLayoutState *_authorLayoutState;
    id _addresseesLayoutState;
    struct CGSize _size;
    struct CGRect _authorFrame;
    struct CGRect _addresseesFrame;
    struct CGRect _bodyFrame;
    struct CGRect _attachmentFrame;
    struct CGRect _tweetstormIndicatorFrame;
    struct CGRect _designatorBadgeFrame;
    struct CGRect _socialBadgeFrame;
    struct CGRect _socialTextFrame;
    struct CGRect _conversationContextTextFrame;
    struct CGRect _caretButtonFrame;
}

@property(nonatomic) struct CGRect caretButtonFrame; // @synthesize caretButtonFrame=_caretButtonFrame;
@property(nonatomic) struct CGRect conversationContextTextFrame; // @synthesize conversationContextTextFrame=_conversationContextTextFrame;
@property(nonatomic) struct CGRect socialTextFrame; // @synthesize socialTextFrame=_socialTextFrame;
@property(nonatomic) struct CGRect socialBadgeFrame; // @synthesize socialBadgeFrame=_socialBadgeFrame;
@property(nonatomic) struct CGRect designatorBadgeFrame; // @synthesize designatorBadgeFrame=_designatorBadgeFrame;
@property(nonatomic) struct CGRect tweetstormIndicatorFrame; // @synthesize tweetstormIndicatorFrame=_tweetstormIndicatorFrame;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct CGRect attachmentFrame; // @synthesize attachmentFrame=_attachmentFrame;
@property(nonatomic) _Bool bodyMayHaveHashflags; // @synthesize bodyMayHaveHashflags=_bodyMayHaveHashflags;
@property(nonatomic) struct CGRect bodyFrame; // @synthesize bodyFrame=_bodyFrame;
@property(retain, nonatomic) id addresseesLayoutState; // @synthesize addresseesLayoutState=_addresseesLayoutState;
@property(nonatomic) struct CGRect addresseesFrame; // @synthesize addresseesFrame=_addresseesFrame;
@property(retain, nonatomic) T1StatusAuthorViewLayoutState *authorLayoutState; // @synthesize authorLayoutState=_authorLayoutState;
@property(nonatomic) struct CGRect authorFrame; // @synthesize authorFrame=_authorFrame;
@property(retain, nonatomic) TFNLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) id <T1StatusViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic, getter=isSocialTextMaxLinesExceeded) _Bool socialTextMaxLinesExceeded; // @synthesize socialTextMaxLinesExceeded;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSocialTextMultipleLines) _Bool socialTextMultipleLines;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

