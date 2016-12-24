/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerSproutStyle;

@interface FBComposerSproutSheetStyle : FBValueObject <NSCopying> {

	double _bannerTopBottomPadding;
	FBComposerSproutStyle* _sproutStyle;
	double _topLayoutInset;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) double bannerTopBottomPadding;                         //@synthesize bannerTopBottomPadding=_bannerTopBottomPadding - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsets;                            //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy,readonly) FBComposerSproutStyle * sproutStyle;              //@synthesize sproutStyle=_sproutStyle - In the implementation block
@property (nonatomic,readonly) double topLayoutInset;                                 //@synthesize topLayoutInset=_topLayoutInset - In the implementation block
-(double)topLayoutInset;
-(FBComposerSproutStyle *)sproutStyle;
-(id)initWithBannerTopBottomPadding:(double)arg1 contentInsets:(UIEdgeInsets)arg2 sproutStyle:(id)arg3 topLayoutInset:(double)arg4 ;
-(double)bannerTopBottomPadding;
-(UIEdgeInsets)contentInsets;
@end
