//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate, NSString;

@protocol TFNOnboardingSubtaskDataProvider
- (_Bool)boolForKey:(NSString *)arg1 inSubtaskWithID:(NSString *)arg2 defaultValue:(_Bool)arg3;
- (long long)integerForKey:(NSString *)arg1 inSubtaskWithID:(NSString *)arg2 defaultValue:(long long)arg3;
- (NSDate *)dateForKey:(NSString *)arg1 inSubtaskWithID:(NSString *)arg2;
- (NSString *)stringForKey:(NSString *)arg1 inSubtaskWithID:(NSString *)arg2;
@end

