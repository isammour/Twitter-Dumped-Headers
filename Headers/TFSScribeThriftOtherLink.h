//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribeThrift/NSCoding-Protocol.h>
#import <TFSScribeThrift/TBase-Protocol.h>

@class NSString;

@interface TFSScribeThriftOtherLink : NSObject <TBase, NSCoding>
{
    _Bool _unusedField;
    _Bool _unusedFieldIsSet;
}

@property(readonly, nonatomic) _Bool unusedFieldIsSet; // @synthesize unusedFieldIsSet=_unusedFieldIsSet;
@property(nonatomic) _Bool unusedField; // @synthesize unusedField=_unusedField;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnusedField:(_Bool)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
