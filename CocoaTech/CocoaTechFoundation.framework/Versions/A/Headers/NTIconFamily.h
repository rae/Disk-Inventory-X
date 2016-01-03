//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NTIconFamily : NSObject
{
    struct IconFamilyResource **hIconFamily;
}

+ (id)iconFamily;
+ (id)iconFamilyWithContentsOfFile:(id)arg1;
+ (id)iconFamilyWithIconOfFile:(id)arg1;
+ (id)iconFamilyWithIconFamilyHandle:(struct IconFamilyResource **)arg1;
+ (id)iconFamilyWithSystemIcon:(int)arg1;
+ (id)iconFamilyWithThumbnailsOfImage:(id)arg1;
+ (BOOL)removeCustomIconFromFile:(id)arg1;
+ (BOOL)removeCustomIconFromDirectory:(id)arg1;
+ (BOOL)hasCustomIconForFile:(id)arg1;
+ (BOOL)hasCustomIconForDirectory:(id)arg1;
+ (void)updateIconRef:(id)arg1;
- (id)init;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithIconFamilyHandle:(struct IconFamilyResource **)arg1;
- (id)initWithIconOfFile:(id)arg1;
- (id)initWithSystemIcon:(int)arg1;
- (id)initWithThumbnailsOfImage:(id)arg1;
- (void)dealloc;
- (id)bitmapImageRepWithAlphaForIconFamilyElement:(unsigned long)arg1;
- (id)imageWithAllReps;
- (BOOL)setIconFamilyElement:(unsigned long)arg1 fromBitmapImageRep:(id)arg2;
- (BOOL)setAsCustomIconForFile:(id)arg1;
- (BOOL)setAsCustomIconForFile:(id)arg1 withCompatibility:(BOOL)arg2;
- (BOOL)setAsCustomIconForDirectory:(id)arg1;
- (BOOL)setAsCustomIconForDirectory:(id)arg1 withCompatibility:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1;
- (struct IconFamilyResource **)iconFamilyHandle;

@end
