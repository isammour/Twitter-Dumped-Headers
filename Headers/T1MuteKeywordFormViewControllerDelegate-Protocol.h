//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, T1MuteKeywordFormViewController, TFNTwitterMutedKeywordList;

@protocol T1MuteKeywordFormViewControllerDelegate <NSObject>
- (void)muteKeywordViewController:(T1MuteKeywordFormViewController *)arg1 errorForKeywordString:(NSString *)arg2 action:(unsigned long long)arg3;
- (void)muteKeywordViewController:(T1MuteKeywordFormViewController *)arg1 didRefreshKeywordList:(TFNTwitterMutedKeywordList *)arg2 forKeywordString:(NSString *)arg3 action:(unsigned long long)arg4;
@end
