//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribeThrift/NSCoding-Protocol.h>
#import <TFSScribeThrift/TBase-Protocol.h>

@class NSDictionary, NSString;

@interface TFSScribeThriftRufousScribeLogCollection : NSObject <TBase, NSCoding>
{
    _Bool _logsIsSet;
    NSDictionary *_logs;
}

@property(readonly, nonatomic) _Bool logsIsSet; // @synthesize logsIsSet=_logsIsSet;
@property(copy, nonatomic) NSDictionary *logs; // @synthesize logs=_logs;
- (void).cxx_destruct;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLogs:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
