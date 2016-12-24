/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMemPageCardController.h>
#import <Facebook/FBCardViewProvider.h>

@class FBMemPageCardContainerCell, UITapGestureRecognizer, FBPageMetaboxView, NSString;

@interface FBMemPageMetaboxCardController : FBMemPageCardController <FBCardViewProvider> {

	FBMemPageCardContainerCell* _cardCell;
	UITapGestureRecognizer* _tapGR;
	FBPageMetaboxView* _metaboxView;

}

@property (nonatomic,retain) FBPageMetaboxView * metaboxView;                     //@synthesize metaboxView=_metaboxView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBPageCardProtocol> cardView; 
-(void)configureWithPage:(id)arg1 ;
-(FBPageMetaboxView *)metaboxView;
-(id)_createViewModel;
-(void)_didTapMetabox;
-(void)setMetaboxView:(FBPageMetaboxView *)arg1 ;
-(UIView*<FBPageCardProtocol>)cardView;
@end
