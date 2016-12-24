/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class FBLibraryThumbnailViewLargeSimpleSubclass, FBLibraryThumbnailView;

@interface FBMediaGridCollectionViewCell : UICollectionViewCell {

	CGRect _previousFrame;
	FBLibraryThumbnailViewLargeSimpleSubclass* _thumbnailView;

}

@property (nonatomic,readonly) FBLibraryThumbnailView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 fnfEnabled:(BOOL)arg2 fnfMemoryOpt:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(FBLibraryThumbnailView *)thumbnailView;
@end
