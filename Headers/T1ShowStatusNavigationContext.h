//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet;

@interface T1ShowStatusNavigationContext : NSObject
{
    unsigned long long _options;
    NSSet *_semanticAnnotationIds;
}

@property(readonly, copy, nonatomic) NSSet *semanticAnnotationIds; // @synthesize semanticAnnotationIds=_semanticAnnotationIds;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (void).cxx_destruct;
- (_Bool)isEqualToShowStatusNavigationContext:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)initWithOptions:(unsigned long long)arg1 semanticAnnotationIds:(id)arg2;

@end

