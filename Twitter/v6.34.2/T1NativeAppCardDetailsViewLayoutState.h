/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol T1NativeAppCardDetailsViewModel;
#import <Twitter/Twitter-Structs.h>
@class TFNLayoutMetrics;

@interface T1NativeAppCardDetailsViewLayoutState : NSObject {

	id<T1NativeAppCardDetailsViewModel> _viewModel;
	unsigned long long _layoutType;
	TFNLayoutMetrics* _layoutMetrics;
	CGSize _size;
	CGRect _titleFrame;
	CGRect _subtitleFrame;
	CGRect _ratingsFrame;
	CGRect _callToActionFrame;
	CGRect _descriptionHighlightFrame;

}

@property (nonatomic,retain) id<T1NativeAppCardDetailsViewModel> viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic) unsigned long long layoutType;                              //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,retain) TFNLayoutMetrics * layoutMetrics;                           //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (assign,nonatomic) CGRect titleFrame;                                          //@synthesize titleFrame=_titleFrame - In the implementation block
@property (assign,nonatomic) CGRect subtitleFrame;                                       //@synthesize subtitleFrame=_subtitleFrame - In the implementation block
@property (assign,nonatomic) CGRect ratingsFrame;                                        //@synthesize ratingsFrame=_ratingsFrame - In the implementation block
@property (assign,nonatomic) CGRect callToActionFrame;                                   //@synthesize callToActionFrame=_callToActionFrame - In the implementation block
@property (assign,nonatomic) CGRect descriptionHighlightFrame;                           //@synthesize descriptionHighlightFrame=_descriptionHighlightFrame - In the implementation block
@property (assign,nonatomic) CGSize size;                                                //@synthesize size=_size - In the implementation block
-(id<T1NativeAppCardDetailsViewModel>)viewModel;
-(void)setViewModel:(id<T1NativeAppCardDetailsViewModel>)arg1 ;
-(CGRect)titleFrame;
-(CGRect)callToActionFrame;
-(void)setTitleFrame:(CGRect)arg1 ;
-(CGRect)descriptionHighlightFrame;
-(void)setDescriptionHighlightFrame:(CGRect)arg1 ;
-(void)setCallToActionFrame:(CGRect)arg1 ;
-(CGRect)subtitleFrame;
-(void)setSubtitleFrame:(CGRect)arg1 ;
-(CGRect)ratingsFrame;
-(void)setRatingsFrame:(CGRect)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setLayoutMetrics:(TFNLayoutMetrics *)arg1 ;
-(TFNLayoutMetrics *)layoutMetrics;
-(unsigned long long)layoutType;
-(void)setLayoutType:(unsigned long long)arg1 ;
@end

