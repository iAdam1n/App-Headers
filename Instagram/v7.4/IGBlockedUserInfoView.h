/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:17 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@class NSString, UIView, UIImageView;

@interface IGBlockedUserInfoView : UIView <IGCoreTextLinkHandler> {

	NSString* _message;
	UIView* _containerView;
	UIImageView* _geoIPBlockedIcon;
	UIView* _messageView;
	UIView* _learnMoreLink;

}

@property (nonatomic,copy) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIView * containerView;                      //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIImageView * geoIPBlockedIcon;              //@synthesize geoIPBlockedIcon=_geoIPBlockedIcon - In the implementation block
@property (nonatomic,retain) UIView * messageView;                        //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,retain) UIView * learnMoreLink;                      //@synthesize learnMoreLink=_learnMoreLink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(UIView *)messageView;
-(void)setMessageView:(UIView *)arg1 ;
-(UIView *)learnMoreLink;
-(void)setLearnMoreLink:(UIView *)arg1 ;
-(UIImageView *)geoIPBlockedIcon;
-(void)setGeoIPBlockedIcon:(UIImageView *)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithMessage:(id)arg1 ;
@end
