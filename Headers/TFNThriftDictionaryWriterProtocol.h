//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribeThrift/TProtocol-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TFNThriftDictionaryWriterProtocol : NSObject <TProtocol>
{
    NSString *_fieldName;
    NSMutableArray *_stack;
    NSMutableDictionary *_root;
}

@property(retain, nonatomic) NSMutableDictionary *root; // @synthesize root=_root;
- (void).cxx_destruct;
- (void)readListEnd;
- (void)readListBeginReturningElementType:(int *)arg1 size:(int *)arg2;
- (void)readSetEnd;
- (void)readSetBeginReturningElementType:(int *)arg1 size:(int *)arg2;
- (void)readMapEnd;
- (void)readMapBeginReturningKeyType:(int *)arg1 valueType:(int *)arg2 size:(int *)arg3;
- (id)readBinary;
- (double)readDouble;
- (long long)readI64;
- (short)readI16;
- (unsigned char)readByte;
- (_Bool)readBool;
- (id)readString;
- (int)readI32;
- (void)readFieldEnd;
- (void)readFieldBeginReturningName:(id *)arg1 type:(int *)arg2 fieldID:(int *)arg3;
- (void)readStructEnd;
- (void)readStructBeginReturningName:(id *)arg1;
- (void)readMessageEnd;
- (void)readMessageBeginReturningName:(id *)arg1 type:(int *)arg2 sequenceID:(int *)arg3;
- (id)readStringBody:(int)arg1;
- (void)writeBool:(_Bool)arg1;
- (void)writeBinary:(id)arg1;
- (void)writeString:(id)arg1;
- (void)writeDouble:(double)arg1;
- (void)writeI64:(long long)arg1;
- (void)writeI16:(short)arg1;
- (void)writeI32:(int)arg1;
- (void)writeByte:(unsigned char)arg1;
- (void)writeListEnd;
- (void)writeListBeginWithElementType:(int)arg1 size:(int)arg2;
- (void)writeSetEnd;
- (void)writeSetBeginWithElementType:(int)arg1 size:(int)arg2;
- (void)writeMapEnd;
- (void)writeMapBeginWithKeyType:(int)arg1 valueType:(int)arg2 size:(int)arg3;
- (void)writeStructEnd;
- (void)writeStructBeginWithName:(id)arg1;
- (void)writeMessageEnd;
- (void)writeMessageBeginWithName:(id)arg1 type:(int)arg2 sequenceID:(int)arg3;
- (void)writeFieldEnd;
- (void)writeFieldStop;
- (void)writeFieldBeginWithName:(id)arg1 type:(int)arg2 fieldID:(int)arg3;
- (void)_pop;
- (void)_push:(id)arg1;
- (void)_writeValue:(id)arg1;
- (id)transport;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

