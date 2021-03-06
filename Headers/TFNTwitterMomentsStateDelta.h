//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TFNTwitterMomentsStateDelta : NSObject
{
    long long _newMoments;
    long long _updatedMoments;
}

@property(readonly, nonatomic) long long updatedMoments; // @synthesize updatedMoments=_updatedMoments;
@property(readonly, nonatomic) long long newMoments; // @synthesize newMoments=_newMoments;
- (_Bool)hasChangesWithMinimumThreshold:(long long)arg1;
- (id)initWithNewMomentCount:(long long)arg1 updatedMomentCount:(long long)arg2;

@end

