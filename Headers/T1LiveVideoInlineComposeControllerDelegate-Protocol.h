//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, T1LiveVideoAutocompleteController, T1LiveVideoInlineComposeController, TFNTwitterComposition, TFNTwitterStatus, TFNViewController;

@protocol T1LiveVideoInlineComposeControllerDelegate <NSObject>
- (NSString *)inlineComposeControllerSemanticCoreIDForSelectedTimeline:(T1LiveVideoInlineComposeController *)arg1;
- (NSString *)inlineComposeControllerInitialComposeString:(T1LiveVideoInlineComposeController *)arg1;
- (double)inlineComposeController:(T1LiveVideoInlineComposeController *)arg1 autocompleteStartingPositionInContainer:(TFNViewController *)arg2;

@optional
- (void)inlineComposeControllerDidReturnFromFullscreen:(T1LiveVideoInlineComposeController *)arg1;
- (void)inlineComposeControllerDidSwitchToFullscreen:(T1LiveVideoInlineComposeController *)arg1;
- (void)inlineComposeController:(T1LiveVideoInlineComposeController *)arg1 autocompleteController:(T1LiveVideoAutocompleteController *)arg2 didChangeDisplayMode:(long long)arg3;
- (void)inlineComposeController:(T1LiveVideoInlineComposeController *)arg1 willRemoveAutocompleteController:(T1LiveVideoAutocompleteController *)arg2;
- (void)inlineComposeController:(T1LiveVideoInlineComposeController *)arg1 willShowAutocompleteController:(T1LiveVideoAutocompleteController *)arg2;
- (void)inlineComposeController:(T1LiveVideoInlineComposeController *)arg1 didFailToSendComposition:(TFNTwitterComposition *)arg2;
- (void)inlineComposeController:(T1LiveVideoInlineComposeController *)arg1 didSendStatus:(TFNTwitterStatus *)arg2;
- (void)inlineComposeControllerDidBeginEditing:(T1LiveVideoInlineComposeController *)arg1;
- (TFNTwitterComposition *)inlineComposerControllerCompositionForSelectedTimeline:(T1LiveVideoInlineComposeController *)arg1;
@end

