/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>

@class FBStackedView, FBRichTextView, FBButton;

@interface FBEventSubscribeSectionView : UITableViewCell {

	FBStackedView* _stackedView;
	FBRichTextView* _primaryTextView;
	FBRichTextView* _secondaryTextView;
	FBButton* _subscribeButton;
	FBButton* _subscribedButton;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,retain) FBRichTextView * primaryTextView;                //@synthesize primaryTextView=_primaryTextView - In the implementation block
@property (nonatomic,retain) FBRichTextView * secondaryTextView;              //@synthesize secondaryTextView=_secondaryTextView - In the implementation block
@property (nonatomic,retain) FBButton * subscribeButton;                      //@synthesize subscribeButton=_subscribeButton - In the implementation block
@property (nonatomic,retain) FBButton * subscribedButton;                     //@synthesize subscribedButton=_subscribedButton - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                         //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(CGSize)sectionViewSize;
-(long long)sectionViewHeight;
-(void)configureViewOnIsSubscribed:(BOOL)arg1 ;
-(FBRichTextView *)primaryTextView;
-(void)setPrimaryTextView:(FBRichTextView *)arg1 ;
-(FBRichTextView *)secondaryTextView;
-(void)setSecondaryTextView:(FBRichTextView *)arg1 ;
-(FBButton *)subscribeButton;
-(void)setSubscribeButton:(FBButton *)arg1 ;
-(FBButton *)subscribedButton;
-(void)setSubscribedButton:(FBButton *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end
