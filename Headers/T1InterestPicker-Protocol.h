//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSSet, NSString, TFNTwitterInterestSuggestions;
@protocol T1InterestPickerDelegate;

@protocol T1InterestPicker
@property(retain, nonatomic) TFNTwitterInterestSuggestions *interestSuggestions;
@property(readonly, nonatomic) NSSet *selectedInterests;
@property(readonly, nonatomic) NSArray *displayedInterests;
@property(copy, nonatomic) NSString *scribeComponent;
@property(copy, nonatomic) NSString *scribeSection;
@property(copy, nonatomic) NSString *scribePage;
@property(nonatomic) __weak id <T1InterestPickerDelegate> interestPickerDelegate;
@end

