//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNCharacterCountProgressView;

@protocol TFNCharacterCountProgressDataSource <NSObject>
- (long long)remainingCountForWarningDisplayInProgressView:(TFNCharacterCountProgressView *)arg1;
- (long long)remainingCharacterCountForProgressView:(TFNCharacterCountProgressView *)arg1;
- (long long)currentCharacterCountForProgressView:(TFNCharacterCountProgressView *)arg1;
@end

