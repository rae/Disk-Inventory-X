//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@interface NTDrawerState : NSObject
{
    struct _NSRect _oldWindowRect;
    struct _NSRect _newWindowRect;
}

+ (id)stateWithRect:(struct _NSRect)arg1 newRect:(struct _NSRect)arg2;
- (id)initWithRect:(struct _NSRect)arg1 newRect:(struct _NSRect)arg2;
- (struct _NSRect)oldRect;
- (struct _NSRect)newRect;

@end

