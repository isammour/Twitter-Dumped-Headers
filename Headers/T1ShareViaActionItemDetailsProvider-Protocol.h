//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNPopoverSourceInfo, TFNTwitterAccount, TFSTwitterScribeContext, UIActivityViewController, UIViewController;

@protocol T1ShareViaActionItemDetailsProvider <NSObject>
- (UIActivityViewController *)activityViewControllerForViewController:(UIViewController *)arg1 account:(TFNTwitterAccount *)arg2 source:(TFNPopoverSourceInfo *)arg3 scribeContext:(TFSTwitterScribeContext *)arg4 doneBlock:(void (^)(void))arg5;
@end

