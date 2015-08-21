/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTableViewCell.h>

@class T1CommerceProfileScrollableImageModule, T1ScrollableProfileImagesView, UIActivityIndicatorView;

@interface T1CommerceProfileScrollableImageTableViewCell : TFNTableViewCell {

	T1CommerceProfileScrollableImageModule* _module;
	/*^block*/id _onImageTap;
	T1ScrollableProfileImagesView* _scrollableImageView;
	UIActivityIndicatorView* _indicatorView;

}

@property (nonatomic,retain) T1CommerceProfileScrollableImageModule * module;                  //@synthesize module=_module - In the implementation block
@property (nonatomic,copy) id onImageTap;                                                      //@synthesize onImageTap=_onImageTap - In the implementation block
@property (nonatomic,retain) T1ScrollableProfileImagesView * scrollableImageView;              //@synthesize scrollableImageView=_scrollableImageView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * indicatorView;                          //@synthesize indicatorView=_indicatorView - In the implementation block
-(id)onImageTap;
-(void)scrollToImageAtIndex:(unsigned long long)arg1 ;
-(void)setOnImageTap:(id)arg1 ;
-(UIActivityIndicatorView *)indicatorView;
-(void)setupImages:(id)arg1 ;
-(void)setModule:(T1CommerceProfileScrollableImageModule *)arg1 ;
-(void)setupOnImagesTapBlock:(/*^block*/id)arg1 ;
-(void)removeObserver;
-(void)setScrollableImageView:(T1ScrollableProfileImagesView *)arg1 ;
-(T1ScrollableProfileImagesView *)scrollableImageView;
-(void)setIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)imagesUpdated:(id)arg1 ;
-(T1CommerceProfileScrollableImageModule *)module;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

