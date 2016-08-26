/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGContentBubbleViewModel.h>
#import <Telegram/TGMessageImageViewDelegate.h>

@class TGMessageImageViewModel, TGModernTextViewModel, NSString;

@interface TGVenueMessageViewModel : TGContentBubbleViewModel <TGMessageImageViewDelegate> {

	TGMessageImageViewModel* _imageModel;
	TGModernTextViewModel* _venueNameModel;
	TGModernTextViewModel* _venueAddressModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)gestureRecognizer:(id)arg1 shouldFailTap:(CGPoint)arg2 ;
-(void)bindSpecialViewsToContainer:(id)arg1 viewStorage:(id)arg2 atItemPosition:(CGPoint)arg3 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 venue:(id)arg3 message:(id)arg4 authorPeer:(id)arg5 viaUser:(id)arg6 context:(id)arg7 ;
-(BOOL)isPreviewableAtPoint:(CGPoint)arg1 ;
-(void)messageImageViewActionButtonPressed:(id)arg1 withAction:(int)arg2 ;
-(void)activateMedia;
-(void)layoutContentForHeaderHeight:(double)arg1 ;
-(CGSize)contentSizeForContainerSize:(CGSize)arg1 needsContentsUpdate:(BOOL*)arg2 infoWidth:(double)arg3 ;
-(void)messageDoubleTapGesture:(id)arg1 ;
@end
