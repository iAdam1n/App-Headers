//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController<SCGalleryViewController>;

@protocol SCGalleryViewControllerDelegate <NSObject>
- (void)galleryViewControllerDidEndDragging:(UIViewController<SCGalleryViewController> *)arg1;
- (void)galleryViewControllerWillBeginDragging:(UIViewController<SCGalleryViewController> *)arg1;
- (void)scrollToCameraFromGallery;
- (void)unlockScrollWithKey:(NSString *)arg1;
- (void)lockScrollWithKey:(NSString *)arg1;
@end
