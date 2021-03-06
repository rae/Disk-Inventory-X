//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSArray;

@interface NTGlyphBlitter : NSObject
{
    NSArray *_segments;
    BOOL _verticallyCenter;
    struct _NSRect _minRect;
    struct _NSSize _size;
    BOOL _ovalBackground;
}

+ (int)endcapWidth;
+ (id)blitterWithString:(id)arg1 size:(struct _NSSize)arg2 numLines:(unsigned int)arg3 verticallyCenter:(BOOL)arg4 attributes:(id)arg5 backColor:(id)arg6 ovalBackground:(BOOL)arg7 antialias:(BOOL)arg8 shadow:(BOOL)arg9;
- (id)initWithString:(id)arg1 size:(struct _NSSize)arg2 numLines:(unsigned int)arg3 verticallyCenter:(BOOL)arg4 attributes:(id)arg5 backColor:(id)arg6 ovalBackground:(BOOL)arg7 antialias:(BOOL)arg8 shadow:(BOOL)arg9;
- (void)dealloc;
- (struct _NSRect)textRectForRect:(struct _NSRect)arg1;
- (struct _NSSize)size;
- (void)drawRect:(struct _NSRect)arg1 textColor:(id)arg2 backColor:(id)arg3;
- (void)drawRect:(struct _NSRect)arg1 textColor:(id)arg2 backColor:(id)arg3 labelColor:(id)arg4;

@end

