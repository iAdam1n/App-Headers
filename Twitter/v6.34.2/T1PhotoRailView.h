/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol T1PhotoRailViewDataSource, T1PhotoRailViewDelegate;
@class NSMutableArray, NSString;

@interface T1PhotoRailView : UIScrollView <UIScrollViewDelegate> {

	long long _imageCount;
	NSMutableArray* _visibleButtons;
	NSMutableArray* _visiblePlaceholders;
	NSMutableArray* _reusableButtons;
	NSMutableArray* _reusablePlaceholders;
	id<T1PhotoRailViewDataSource> _photoRailDataSource;
	id<T1PhotoRailViewDelegate> _photoRailDelegate;
	double _imageSpacing;
	CGSize _imageSize;
	UIEdgeInsets _contentPadding;

}

@property (assign,nonatomic,__weak) id<T1PhotoRailViewDataSource> photoRailDataSource;              //@synthesize photoRailDataSource=_photoRailDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<T1PhotoRailViewDelegate> photoRailDelegate;                  //@synthesize photoRailDelegate=_photoRailDelegate - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                                      //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) double imageSpacing;                                                   //@synthesize imageSpacing=_imageSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentPadding;                                           //@synthesize contentPadding=_contentPadding - In the implementation block
@property (nonatomic,readonly) NSRange visibleRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(UIEdgeInsets)legacyDefaultContentPadding;
+(double)defaultImageSpacing;
-(void)setContentPadding:(UIEdgeInsets)arg1 ;
-(void)setPhotoRailDataSource:(id<T1PhotoRailViewDataSource>)arg1 ;
-(void)setPhotoRailDelegate:(id<T1PhotoRailViewDelegate>)arg1 ;
-(CGRect)rectForImageAtColumn:(long long)arg1 ;
-(void)_didTapMediaPreviewButton:(id)arg1 ;
-(CGRect)_imageFrameAtIndex:(long long)arg1 ;
-(void)scrollToColumn:(long long)arg1 animated:(BOOL)arg2 ;
-(id)imageAtColumn:(long long)arg1 ;
-(id)viewForImageAtColumn:(long long)arg1 ;
-(void)reloadVisibleImages;
-(id<T1PhotoRailViewDataSource>)photoRailDataSource;
-(id<T1PhotoRailViewDelegate>)photoRailDelegate;
-(UIEdgeInsets)contentPadding;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)touchesShouldCancelInContentView:(id)arg1 ;
-(CGSize)imageSize;
-(double)imageSpacing;
-(void)setImageSpacing:(double)arg1 ;
-(NSRange)visibleRange;
-(void)setImageSize:(CGSize)arg1 ;
@end

