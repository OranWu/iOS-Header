//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PlaceholderUtility : NSObject
{
}

+ (id)storeMetadataFromDownload:(id)arg1;
+ (_Bool)setPlaceholder:(id)arg1 coordinator:(id)arg2 error:(id *)arg3;
+ (_Bool)createPlaceholderForDownload:(id)arg1 coordinator:(id)arg2 error:(id *)arg3;
+ (id)newThumbnailPromiseForDownload:(id)arg1 URL:(id)arg2 error:(id *)arg3;
+ (id)newPlaceholderForExtensionWithParent:(id)arg1 download:(id)arg2;
+ (unsigned long long)installTypeForDownload:(id)arg1;
+ (id)downloadFromEntity:(id)arg1;

@end

