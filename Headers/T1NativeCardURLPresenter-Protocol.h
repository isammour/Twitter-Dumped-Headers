//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSURL, TFNActivityViewController, TFNTwitterCardViewEventContext, TFSTwitterEntityURL, UIView, UIViewController;

@protocol T1NativeCardURLPresenter <NSObject>
- (void)openActionSheetForDirectMessageEntryEntityURL:(TFSTwitterEntityURL *)arg1 context:(TFNTwitterCardViewEventContext *)arg2 showFromView:(UIView *)arg3 completion:(void (^)(void))arg4;
- (void)openShareActionSheetForEntityURL:(TFSTwitterEntityURL *)arg1 context:(TFNTwitterCardViewEventContext *)arg2 showFromView:(UIView *)arg3 completion:(void (^)(_Bool))arg4;
- (TFNActivityViewController *)shareSheetViewControllerForEntityURL:(TFSTwitterEntityURL *)arg1 context:(TFNTwitterCardViewEventContext *)arg2 showFromView:(UIView *)arg3 completion:(void (^)(_Bool))arg4;
- (void)openURL:(NSURL *)arg1 context:(TFNTwitterCardViewEventContext *)arg2;
- (UIViewController *)presentedViewControllerForURL:(NSURL *)arg1 context:(TFNTwitterCardViewEventContext *)arg2;
@end
