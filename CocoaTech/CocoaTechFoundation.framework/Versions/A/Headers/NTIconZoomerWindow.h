//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSImage;

@interface NTIconZoomerWindow : NSWindow
{
    NSImage *_image;
    struct _NSRect _imageRect;
    BOOL _inUse;
}

- (id)init;
- (void)dealloc;
- (void)zoomImage:(id)arg1 atPoint:(struct _NSPoint)arg2;
- (void)doZoomImage:(id)arg1;

@end

