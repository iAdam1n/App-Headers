/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/JSCoreTextViewDelegate.h>

@protocol ZRBannerViewDelegate;
@class ZRBannerData, UILabel, JSCoreTextView, UIButton, NSString;

@interface MNZRBannerView : UIView <JSCoreTextViewDelegate> {

	id<ZRBannerViewDelegate> _delegate;
	ZRBannerData* _bannerData;
	UILabel* _title;
	JSCoreTextView* _bodyTextView;
	UIButton* _closeButton;

}

@property (assign,nonatomic,__weak) id<ZRBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ZRBannerData * bannerData;                             //@synthesize bannerData=_bannerData - In the implementation block
@property (nonatomic,retain) UILabel * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) JSCoreTextView * bodyTextView;                         //@synthesize bodyTextView=_bodyTextView - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                //@synthesize closeButton=_closeButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBannerData:(ZRBannerData *)arg1 ;
-(ZRBannerData *)bannerData;
-(void)textView:(id)arg1 linkTapped:(id)arg2 text:(id)arg3 ;
-(void)closePressed;
-(void)setBodyTextView:(JSCoreTextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<ZRBannerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(UILabel *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<ZRBannerViewDelegate>)delegate;
-(UILabel *)title;
-(JSCoreTextView *)bodyTextView;
-(void)setCloseButton:(UIButton *)arg1 ;
-(UIButton *)closeButton;
@end

