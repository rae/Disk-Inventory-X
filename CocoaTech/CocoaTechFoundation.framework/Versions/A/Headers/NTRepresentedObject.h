//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//






@class NSString;

@interface NTRepresentedObject : NSObject <NSCoding, NSCopying>
{
    int _menuIdentifier;
    id _menuData;
    NSString *_stringRepresentation;
}

+ (id)representedObjectWithDesc:(id)arg1 menuIdentifier:(int)arg2;
+ (id)representedObjectWithNumber:(id)arg1 menuIdentifier:(int)arg2;
- (id)initWithObject:(id)arg1 menuIdentifier:(int)arg2;
- (void)dealloc;
- (int)menuIdentifier;
- (id)menuData;
- (id)stringRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

