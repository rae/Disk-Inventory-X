//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSSet;

@interface NTImageTypeMgr : NSObject
{
    NSSet *_imageHFSTypesSet;
    NSSet *_imageExtensionsSet;
}

+ (void)initialize;
+ (id)sharedInstance;
- (id)init;
- (BOOL)isImageHFSType:(unsigned long)arg1;
- (BOOL)isImageExtension:(id)arg1;

@end

