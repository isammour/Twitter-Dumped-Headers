//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1FoundMediaControllerDelegate-Protocol.h>

@class NSString, T1FoundMediaController, TFNTwitterStatus;

@interface T1FoundMediaQuoteTweetPresentationContext : NSObject <T1FoundMediaControllerDelegate>
{
    _Bool _isPresenting;
    TFNTwitterStatus *_status;
    T1FoundMediaController *_foundMediaController;
}

@property(retain, nonatomic) T1FoundMediaController *foundMediaController; // @synthesize foundMediaController=_foundMediaController;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
- (void).cxx_destruct;
- (void)foundMediaController:(id)arg1 viewControllerDidCancel:(id)arg2;
- (void)foundMediaController:(id)arg1 viewController:(id)arg2 didSelectFoundMediaItem:(id)arg3;
- (void)presentGIFSearchWithViewController:(id)arg1 status:(id)arg2 account:(id)arg3 sourceInfo:(id)arg4 animated:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

