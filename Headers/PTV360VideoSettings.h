//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTV360VideoSettings : NSObject
{
    int _height;
}

+ (id)sharedInstance;
@property(nonatomic) int height; // @synthesize height=_height;
- (struct CGSize)resolution;
- (void)resetDefaultHeightSettings:(int)arg1;
- (id)init;
- (int)_heightFromTweaks;
- (_Bool)_overrideWithTweaks;

@end

