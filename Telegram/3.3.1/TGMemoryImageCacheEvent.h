//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UIImage;

@interface TGMemoryImageCacheEvent : NSObject
{
    UIImage *_image;
    NSDictionary *_attributes;
}

@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 attributes:(id)arg2;

@end
