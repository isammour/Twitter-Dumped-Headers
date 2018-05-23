//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TFNTwitterCardViewEventHeatMapData : NSObject
{
    long long _actionType;
    long long _elementType;
    struct CGPoint _eventPoint;
    struct CGSize _elementSize;
}

@property(nonatomic) struct CGSize elementSize; // @synthesize elementSize=_elementSize;
@property(nonatomic) struct CGPoint eventPoint; // @synthesize eventPoint=_eventPoint;
@property(nonatomic) long long elementType; // @synthesize elementType=_elementType;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (_Bool)isEqual:(id)arg1;
- (id)initWithActionType:(long long)arg1 elementType:(long long)arg2 eventPoint:(struct CGPoint)arg3 elementSize:(struct CGSize)arg4;
- (id)init;

@end

