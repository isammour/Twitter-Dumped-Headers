//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/NSObject-Protocol.h>

@protocol TFNDynamicColorSetterAdapter <NSObject>
- (_Bool)dynamicColorSetterArguments:(id)arg1 haveDynamicColorsForObject:(id)arg2;
- (_Bool)dynamicColorSetterWithArguments:(id)arg1 shouldOverwriteSetterWithArguments:(id)arg2;
- (void)invokeDynamicColorSetter:(CDUnknownFunctionPointerType)arg1 forObject:(id)arg2 withSelector:(SEL)arg3 arguments:(id)arg4;
- (id)dynamicColorSetterArguments:(id)arg1 forObject:(id)arg2;
- (id)blockRecordingDynamicColorSetter:(SEL)arg1 withRecorder:(void (^)(id, id))arg2;
@end
