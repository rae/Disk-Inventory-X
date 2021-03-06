//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NTFileDesc;

@interface NTFileTypeIdentifier : NSObject
{
    NTFileDesc *_desc;
    struct __tflags {
        unsigned int _isImage:1;
        unsigned int _isImage_initialized:1;
        unsigned int _isMovie:1;
        unsigned int _isMovie_initialized:1;
        unsigned int _isMP3:1;
        unsigned int _isMP3_initialized:1;
        unsigned int _isAudio:1;
        unsigned int _isAudio_initialized:1;
        unsigned int _isText:1;
        unsigned int _isText_initialized:1;
        unsigned int _isTextClipping:1;
        unsigned int _isTextClipping_initialized:1;
        unsigned int _isURLClipping:1;
        unsigned int _isURLClipping_initialized:1;
        unsigned int _isRTF:1;
        unsigned int _isRTF_initialized:1;
        unsigned int _isRTFD:1;
        unsigned int _isRTFD_initialized:1;
        unsigned int _isHTML:1;
        unsigned int _isHTML_initialized:1;
        unsigned int _isWeb:1;
        unsigned int _isWeb_initialized:1;
        unsigned int _isPostscript:1;
        unsigned int _isPostscript_initialized:1;
        unsigned int _isTIFF:1;
        unsigned int _isTIFF_initialized:1;
        unsigned int _isPDF:1;
        unsigned int _isPDF_initialized:1;
        unsigned int _isMSWord:1;
        unsigned int _isMSWord_initialized:1;
        unsigned int _isDiskImage:1;
        unsigned int _isDiskImage_initialized:1;
        unsigned int _isIcon:1;
        unsigned int _isIcon_initialized:1;
        unsigned int _isClassicSound:1;
        unsigned int _isClassicSound_initialized:1;
        unsigned int _isUnsanityAPEPackage:1;
        unsigned int _isUnsanityAPEPackage_initialized:1;
        unsigned int _isFont:1;
        unsigned int _isFont_initialized:1;
    } _flags;
}

+ (id)typeIdentifier:(id)arg1;
- (id)initWithDesc:(id)arg1;
- (void)dealloc;
- (BOOL)isImage;
- (BOOL)isText;
- (BOOL)isMovie;
- (BOOL)isAudio;
- (BOOL)isMP3;
- (BOOL)isClassicSound;
- (BOOL)isMSWord;
- (BOOL)isRTF;
- (BOOL)isRTFD;
- (BOOL)isHTML;
- (BOOL)isWeb;
- (BOOL)isPostscript;
- (BOOL)isTIFF;
- (BOOL)isPDF;
- (BOOL)isIcon;
- (BOOL)isDiskImage;
- (BOOL)isTextClipping;
- (BOOL)isUnsanityAPEPackage;
- (BOOL)isAnimatedGif;
- (BOOL)isFont;

@end

