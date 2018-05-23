//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVActionSheetController.h>

#import <PeriscopeViewer/PTVChatActionHeaderViewDelegate-Protocol.h>
#import <PeriscopeViewer/PTVChatActionSheetViewDelegate-Protocol.h>

@class NSArray, NSObject, NSString;
@protocol PTVChatActionSheetControllerDelegate, PTVLoggedInUserProtocol;

@interface PTVChatActionSheetController : PTVActionSheetController <PTVChatActionSheetViewDelegate, PTVChatActionHeaderViewDelegate>
{
    PTVChatActionSheetController *_weakSelf;
    NSArray *_carouselMessages;
    unsigned long long _currentMessagePosition;
    _Bool _hasReply;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    _Bool _reportButtonsVisible;
    id <PTVChatActionSheetControllerDelegate> _chatActionSheetDelegate;
}

+ (void)addMessageWithAggregationIfNecessary:(id)arg1 toMessageArray:(id)arg2 shouldAddJoinAggregate:(_Bool)arg3 shouldBePutInFrontOfArray:(_Bool)arg4;
+ (id)carouselMessagesFromArray:(id)arg1 withCurrentMessage:(id)arg2;
+ (_Bool)canDisplayMessageInChatCarousel:(id)arg1;
+ (id)AttributesForMessage;
@property(nonatomic) _Bool reportButtonsVisible; // @synthesize reportButtonsVisible=_reportButtonsVisible;
@property(nonatomic) __weak id <PTVChatActionSheetControllerDelegate> chatActionSheetDelegate; // @synthesize chatActionSheetDelegate=_chatActionSheetDelegate;
- (void).cxx_destruct;
- (void)setCandyStyleForCurrentCarouselMessage;
- (id)currentMessage;
- (id)chatActionSheetView;
- (id)commentViewForChatMessage:(id)arg1;
- (void)didPressReport;
- (void)didPressBlockUser;
- (void)didPressViewProfile;
- (void)didPressReply;
- (id)initWithDelegate:(id)arg1 attributedMessage:(id)arg2 hasReply:(_Bool)arg3 canReport:(_Bool)arg4 carouselMessages:(id)arg5 currentMessagePosition:(unsigned long long)arg6 dismissTitle:(id)arg7 loggedInUser:(id)arg8;
- (void)chatActionHeaderViewDidEndScroll;
- (void)chatActionHeaderViewDidChangeMessageViewIndex:(unsigned long long)arg1;
- (void)chatActionSheetDidPressReportOtherReason;
- (void)chatActionSheetDidPressReportSexualContent;
- (void)chatActionSheetDidPressReportSpam;
- (void)chatActionSheetDidPressReportAbuse;
- (void)dismissButtonPressedOnActionSheetView:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
