//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <pop/POPAnimatableProperty.h>

@interface POPStaticAnimatableProperty : POPAnimatableProperty
{
    struct {
        id _field1;
        CDUnknownBlockType _field2;
        CDUnknownBlockType _field3;
        double _field4;
    } *_state;
}

- (double)threshold;
- (CDUnknownBlockType)writeBlock;
- (CDUnknownBlockType)readBlock;
- (id)name;

@end

