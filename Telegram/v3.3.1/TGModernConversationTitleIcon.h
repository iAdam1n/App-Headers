//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface TGModernConversationTitleIcon : NSObject
{
    int _iconPosition;
    UIImage *_image;
    double _offsetWeight;
    struct CGPoint _imageOffset;
    struct CGRect _bounds;
}

@property(nonatomic) int iconPosition; // @synthesize iconPosition=_iconPosition;
@property(nonatomic) struct CGPoint imageOffset; // @synthesize imageOffset=_imageOffset;
@property(nonatomic) double offsetWeight; // @synthesize offsetWeight=_offsetWeight;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)init;

@end
