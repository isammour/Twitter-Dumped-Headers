//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface T1SignedOutScribeHelper : NSObject
{
    _Bool _hasRecordedTimeToAction;
    double _startTime;
    double _loadTime;
}

- (void)private_scribeTimeToAction:(id)arg1;
- (void)scribeViewImpressionWithParameters:(id)arg1;
- (void)onSignUp;
- (void)onSignIn;
- (void)onViewDidAppear;
- (void)onViewDidLoad;

@end
