//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/NSObject-Protocol.h>

@class NSError, NSString, PTVChatWireMessage;

@protocol PTVChatConnectionDelegate <NSObject>
- (void)addLogEntry:(NSString *)arg1;
- (void)didReceiveMessage:(PTVChatWireMessage *)arg1;
- (void)didSendMessage:(PTVChatWireMessage *)arg1;
- (void)didFailWithError:(NSError *)arg1;
- (void)didConnect;
@end
