//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFXParameter.h>

@interface TFXParameterBOOL : TFXParameter
{
    _Bool _defaultValue;
    _Bool _value;
}

@property(nonatomic) _Bool value; // @synthesize value=_value;
@property(nonatomic) _Bool defaultValue; // @synthesize defaultValue=_defaultValue;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)setterBlock;
- (id)getterBlock;
- (_Bool)isBOOL;

@end
