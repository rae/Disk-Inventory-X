//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSMutableArray;

@interface NTIconPositions : NSObject
{
    struct _NSPoint _origin;
    NSMutableArray *_items;
}

+ (id)iconPositions;
+ (struct _NSSize)defaultOffset;
+ (id)iconPositionsWithOrigin:(struct _NSPoint)arg1;
- (id)init;
- (void)dealloc;
- (void)setOrigin:(struct _NSPoint)arg1;
- (struct _NSPoint)origin;
- (void)offsetOriginBy:(struct _NSSize)arg1;
- (void)addItem:(id)arg1 position:(struct _NSPoint)arg2;
- (struct _NSPoint)positionForPath:(id)arg1;

@end

