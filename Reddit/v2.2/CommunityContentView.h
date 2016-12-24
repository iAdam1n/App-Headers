/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <Reddit/SwipyContentView.h>

@class BaseButton, ImageLabelContentView, BaseView;

@interface CommunityContentView : SwipyContentView {

	BOOL _enableDeletion;
	BOOL _enableFavoriting;
	BaseButton* _subscribeButton;
	ImageLabelContentView* _mainCommunityContentView;
	BaseButton* _deleteButton;
	BaseButton* _favoriteButton;
	BaseView* _swipeContainerView;

}

@property (nonatomic,retain) ImageLabelContentView * mainCommunityContentView;              //@synthesize mainCommunityContentView=_mainCommunityContentView - In the implementation block
@property (nonatomic,retain) BaseButton * deleteButton;                                     //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) BaseButton * subscribeButton;                                  //@synthesize subscribeButton=_subscribeButton - In the implementation block
@property (nonatomic,retain) BaseButton * favoriteButton;                                   //@synthesize favoriteButton=_favoriteButton - In the implementation block
@property (nonatomic,retain) BaseView * swipeContainerView;                                 //@synthesize swipeContainerView=_swipeContainerView - In the implementation block
@property (assign,nonatomic) BOOL enableDeletion;                                           //@synthesize enableDeletion=_enableDeletion - In the implementation block
@property (assign,nonatomic) BOOL enableFavoriting;                                         //@synthesize enableFavoriting=_enableFavoriting - In the implementation block
-(void)prepareContentViewForReuse;
-(ImageLabelContentView *)mainCommunityContentView;
-(void)refreshSwipeView;
-(BaseButton *)favoriteButton;
-(BOOL)enableDeletion;
-(BOOL)enableFavoriting;
-(BaseView *)swipeContainerView;
-(void)setEnableDeletion:(BOOL)arg1 ;
-(void)setEnableFavoriting:(BOOL)arg1 ;
-(BaseButton *)subscribeButton;
-(void)setSubscribeButton:(BaseButton *)arg1 ;
-(void)setMainCommunityContentView:(ImageLabelContentView *)arg1 ;
-(void)setFavoriteButton:(BaseButton *)arg1 ;
-(void)setSwipeContainerView:(BaseView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BaseButton *)deleteButton;
-(void)setDeleteButton:(BaseButton *)arg1 ;
@end
