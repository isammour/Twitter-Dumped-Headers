//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNButtonAppearanceKey, UIImage;

@protocol TFNButtonImageProvider <NSObject>
- (UIImage *)imageWithHeight:(double)arg1 forAppearanceKey:(TFNButtonAppearanceKey *)arg2;

@optional
- (struct CGSize)imageSizeForAppearanceKey:(TFNButtonAppearanceKey *)arg1;
@end
