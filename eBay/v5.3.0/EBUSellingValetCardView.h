/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIContentCardView.h>

@class EUIView, EUILabel, EUICallToActionButton, EUIImageView, NSString;

@interface EBUSellingValetCardView : EUIContentCardView {

	EUIView* _containerView;
	EUILabel* _descriptionLabel;
	EUICallToActionButton* _button;
	EUIImageView* _imgView;
	NSString* _trackingID;

}

@property (nonatomic,copy) EUIView * containerView;                     //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,copy) EUILabel * descriptionLabel;                 //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,copy) EUICallToActionButton * button;              //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) EUIImageView * imgView;                      //@synthesize imgView=_imgView - In the implementation block
@property (nonatomic,copy) NSString * trackingID;                       //@synthesize trackingID=_trackingID - In the implementation block
-(id)colorForIpadGutter;
-(EUIImageView *)imgView;
-(void)setImgView:(EUIImageView *)arg1 ;
-(void)tapCardAction:(id)arg1 ;
-(id)imageForValet;
-(id)valetUrl;
-(EUICallToActionButton *)button;
-(id)init;
-(EUIView *)containerView;
-(void)setContainerView:(EUIView *)arg1 ;
-(void)setButton:(EUICallToActionButton *)arg1 ;
-(EUILabel *)descriptionLabel;
-(NSString *)trackingID;
-(void)setTrackingID:(NSString *)arg1 ;
-(void)setDescriptionLabel:(EUILabel *)arg1 ;
@end

