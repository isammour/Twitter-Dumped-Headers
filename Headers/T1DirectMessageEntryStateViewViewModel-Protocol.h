//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSAttributedString, NSNumber, UIFont;

@protocol T1DirectMessageEntryStateViewViewModel
- (void)saveProgressIndicatorDisplayProgress:(NSNumber *)arg1;
- (NSNumber *)progressIndicatorDisplayProgress;
@property(nonatomic, readonly) double mediaUploadProgress;
@property(nonatomic, readonly) _Bool messageEntryStateShowsTimestamp;
@property(nonatomic, readonly) struct CGSize messageEntryStateIndicatorSize;
@property(nonatomic, readonly) UIFont *messageEntryStateLabelFont;
@property(nonatomic, readonly) NSAttributedString *messageEntryStateLabelAttributedText;
@property(nonatomic, readonly) long long messageEntryStateIndicatorType;
@property(nonatomic, readonly) NSAttributedString *messageEntrySenderLabelAttributedText;
@property(nonatomic, readonly) NSAttributedString *messageEntryTimestampLabelAttributedText;
@end

