/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <AlienBlue/ABCustomOutlineNavigationBar.h>

@class UIView, UIButton;

@interface PostsNavigationBar : ABCustomOutlineNavigationBar {

	UIView* _searchHeaderBarContainerView;
	UIView* _searchHeaderBarView;
	UIButton* _announcementButton;

}

@property (retain) UIView * searchHeaderBarContainerView;                   //@synthesize searchHeaderBarContainerView=_searchHeaderBarContainerView - In the implementation block
@property (retain) UIView * searchHeaderBarView;                            //@synthesize searchHeaderBarView=_searchHeaderBarView - In the implementation block
@property (readonly) BOOL shouldDecorateForAnnouncementBanner; 
@property (retain) UIButton * announcementButton;                           //@synthesize announcementButton=_announcementButton - In the implementation block
-(double)maximumBarHeight;
-(void)setAnnouncementButton:(UIButton *)arg1 ;
-(UIButton *)announcementButton;
-(void)userDidTapAnnouncementButton;
-(void)announcementReceived;
-(void)announcementMarkedAsRead;
-(void)updateAnnouncementButtonAnimated:(BOOL)arg1 ;
-(void)setSearchHeaderBar:(id)arg1 ;
-(void)setSearchHeaderBarContainerView:(UIView *)arg1 ;
-(UIView *)searchHeaderBarContainerView;
-(UIView *)searchHeaderBarView;
-(void)setSearchHeaderBarView:(UIView *)arg1 ;
-(BOOL)shouldDecorateForAnnouncementBanner;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end
