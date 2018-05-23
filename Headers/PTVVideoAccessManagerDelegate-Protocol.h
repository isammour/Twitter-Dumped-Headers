//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/NSObject-Protocol.h>

@class NSError, NSString, PTVAccessVideo, PTVVideoAccessManager;

@protocol PTVVideoAccessManagerDelegate <NSObject>

@optional
- (void)videoAccessManager:(PTVVideoAccessManager *)arg1 didFailToFetchVideoAccessWithError:(NSError *)arg2;
- (void)videoAccessManager:(PTVVideoAccessManager *)arg1 didUpdateVideoAccess:(PTVAccessVideo *)arg2 previousVideoAccess:(PTVAccessVideo *)arg3;
- (void)videoAccessManager:(PTVVideoAccessManager *)arg1 didLogEvent:(NSString *)arg2;
@end

