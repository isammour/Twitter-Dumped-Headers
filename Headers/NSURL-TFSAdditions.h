//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (TFSAdditions)
+ (id)tfs_URLWithDisplayString:(id)arg1;
+ (id)tfs_URLWithString:(id)arg1;
- (id)tfs_URLBySanitizingEmptySchemeAndEmptyHost;
- (_Bool)tfs_hasHTTPScheme;
- (id)tfs_URLByAddingOrUpdatingQueryItems:(id)arg1;
- (id)tfs_URLByAppendingQueryItems:(id)arg1;
- (_Bool)tfs_hostIsSubDomainOfString:(id)arg1;
- (id)tfs_parameterString;
- (id)tfs_unparameterizedURLString;
- (id)tfs_resourceString;
- (id)tfs_displayString;
- (id)tfs_schemelessString;
- (id)tfs_absoluteString;
@end

