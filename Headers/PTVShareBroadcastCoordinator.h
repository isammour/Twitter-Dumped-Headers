//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, PTVBroadcastController, UIViewController;
@protocol PTVShareBroadcastCoordinatorDelegate;

@interface PTVShareBroadcastCoordinator : NSObject
{
    PTVShareBroadcastCoordinator *_weakSelf;
    id <PTVShareBroadcastCoordinatorDelegate> _delegate;
    PTVBroadcastController *_broadcastController;
    UIViewController *_hostViewController;
    NSTimer *_retweetTimer;
}

@property(retain, nonatomic) NSTimer *retweetTimer; // @synthesize retweetTimer=_retweetTimer;
@property(readonly, nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(readonly, nonatomic) PTVBroadcastController *broadcastController; // @synthesize broadcastController=_broadcastController;
@property(nonatomic) __weak id <PTVShareBroadcastCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didCompleteRetweetBroadcastWithError:(id)arg1 canRetry:(_Bool)arg2;
- (void)willRetweetBroadcast;
- (CDUnknownBlockType)retweetBroadcastBlock;
- (CDUnknownBlockType)retweetBroadcastBlockWithCompletion;
- (void)didSelectRetweetBroadcast;
- (void)didSelectToggleRetweetBroadcast;
- (_Bool)canRetweetBroadcast;
- (void)didCompleteShareOnTwitterWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)presentTweetCompositionControllerWithScreenshot:(id)arg1 timecode:(double)arg2 sourceViewForActivityViewController:(id)arg3;
- (void)didSelectShareOnTwitterWithScreenshot:(id)arg1 timecode:(double)arg2 sourceViewForActivityViewController:(id)arg3;
- (id)initWithDelegate:(id)arg1 hostViewController:(id)arg2 broadcastController:(id)arg3;
- (void)dealloc;

@end

