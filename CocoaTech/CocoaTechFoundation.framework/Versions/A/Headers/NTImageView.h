//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NTFileDesc;

@interface NTImageView : NSImageView
{
    NTFileDesc *_desc;
    BOOL _draggingSource;
    BOOL _drawFrame;
    BOOL _convertToCachedImage;
}

- (id)initWithFrame:(struct _NSRect)arg1;
- (void)dealloc;
- (BOOL)isOpaque;
- (void)drawRect:(struct _NSRect)arg1;
- (void)setDesc:(id)arg1 image:(id)arg2;
- (void)setDraggingSource:(BOOL)arg1;
- (BOOL)draggingSource;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (BOOL)knowsPagesFirst:(int *)arg1 last:(int *)arg2;
- (struct _NSRect)rectForPage:(int)arg1;

@end

