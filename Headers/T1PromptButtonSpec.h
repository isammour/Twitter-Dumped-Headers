//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface T1PromptButtonSpec : NSObject
{
    NSString *_title;
    unsigned long long _strength;
    unsigned long long _variant;
    UIColor *_tintColor;
    CDUnknownBlockType _action;
}

@property(readonly, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) unsigned long long variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) unsigned long long strength; // @synthesize strength=_strength;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)private_buttonAction:(id)arg1;
- (id)private_buttonForToolbarItem:(_Bool)arg1 withSize:(unsigned long long)arg2;
- (id)barButtonItem;
- (id)buttonWithSize:(unsigned long long)arg1;
- (id)initWithTitle:(id)arg1 strength:(unsigned long long)arg2 variant:(unsigned long long)arg3 tintColor:(id)arg4 action:(CDUnknownBlockType)arg5;
- (id)initWithTitle:(id)arg1 strength:(unsigned long long)arg2 variant:(unsigned long long)arg3 action:(CDUnknownBlockType)arg4;

@end

