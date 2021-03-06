//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVShareTimeCodeCoordinator : NSObject
{
}

+ (void)PresentFetchShareURLErrorToast;
+ (void)PresentShareControllerFromViewController:(id)arg1 FromView:(id)arg2 WithShareURL:(id)arg3 Animated:(_Bool)arg4 Completion:(CDUnknownBlockType)arg5;
+ (void)PresentShareControllerFromViewController:(id)arg1 FromView:(id)arg2 WithBroadcast:(id)arg3 LoggedInUser:(id)arg4 TimeCode:(double)arg5 Animated:(_Bool)arg6 Completion:(CDUnknownBlockType)arg7;
+ (id)SetTimeCode:(double)arg1 ForShareURL:(id)arg2;
+ (id)SetTimeCode:(double)arg1 ForShareURLString:(id)arg2;
+ (void)FetchShareURLDidComplete:(id)arg1 TimeCode:(double)arg2 Error:(id)arg3 Completion:(CDUnknownBlockType)arg4;
+ (void)FetchShareURLForBroadcast:(id)arg1 TimeCode:(double)arg2 LoggedInUser:(id)arg3 Completion:(CDUnknownBlockType)arg4;

@end

