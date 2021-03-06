//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSImage, NSMutableArray, NSString, NTFileDesc, NTIcon;

@interface NTMenu : NSObject <NSCopying>
{
    BOOL _isSeparator;
    NSString *_title;
    NSImage *_icon;
    NTIcon *_ntIcon;
    NSString *_key;
    int _modifiersMask;
    int _tag;
    NTFileDesc *_desc;
    NSMutableArray *_menuItems;
    BOOL _autoenablesItems;
}

+ (id)menuWithArray:(id)arg1 rootDesc:(id)arg2;
+ (id)menuWithDirectory:(id)arg1;
+ (id)separatorItem;
+ (id)menuWithDesc:(id)arg1 key:(id)arg2 mask:(int)arg3;
+ (id)menuWithTitle:(id)arg1 tag:(int)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)setTag:(int)arg1;
- (int)tag;
- (BOOL)hasSubitems;
- (void)setSeparator:(BOOL)arg1;
- (BOOL)isSeparator;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setNTIcon:(id)arg1;
- (void)setIcon:(id)arg1;
- (id)icon;
- (void)setKey:(id)arg1;
- (id)key;
- (void)setModifiersMask:(int)arg1;
- (int)modifiersMask;
- (void)setDesc:(id)arg1;
- (id)desc;
- (id)items;
- (unsigned int)numItems;
- (void)addItem:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(int)arg2;
- (int)rank;
- (int)compareDynamicItems:(id)arg1;
- (void)sortItems;
- (void)changeMenuTitle:(id)arg1 forDesc:(id)arg2;
- (id)buildNSMenuWithAction:(SEL)arg1 target:(id)arg2;
- (id)buildNSMenuWithAction:(SEL)arg1;
- (id)buildNSMenuWithAction:(SEL)arg1 menuIdentifier:(int)arg2;
- (id)buildNSMenuWithAction:(SEL)arg1 target:(id)arg2 menuIdentifier:(int)arg3;
- (void)addToNSMenu:(id)arg1 withAction:(SEL)arg2;
- (void)addToNSMenu:(id)arg1 withAction:(SEL)arg2 menuIdentifier:(int)arg3;
- (void)addToNSMenu:(id)arg1 withAction:(SEL)arg2 target:(id)arg3 menuIdentifier:(int)arg4;
- (void)setAutoenablesItems:(BOOL)arg1 setSubmenus:(BOOL)arg2;
- (BOOL)autoenablesItems;

@end

