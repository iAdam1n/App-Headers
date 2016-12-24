/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, UIView;

@interface MNGNAtiveObject : NSObject {

	NSString* _title;
	NSString* _socialContext;
	NSString* _body;
	NSString* _callToAction;
	NSURL* _photoUrl;
	NSURL* _coverImageUrl;
	UIView* _badgeView;
	long long _priceType;
	NSString* _localizedPrice;
	/*^block*/id _registreBlock;
	/*^block*/id _mediaContainerBlock;

}

@property (retain) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (retain) NSString * socialContext;                    //@synthesize socialContext=_socialContext - In the implementation block
@property (retain) NSString * body;                             //@synthesize body=_body - In the implementation block
@property (retain) NSString * callToAction;                     //@synthesize callToAction=_callToAction - In the implementation block
@property (retain) NSURL * photoUrl;                            //@synthesize photoUrl=_photoUrl - In the implementation block
@property (retain) NSURL * coverImageUrl;                       //@synthesize coverImageUrl=_coverImageUrl - In the implementation block
@property (retain) UIView * badgeView;                          //@synthesize badgeView=_badgeView - In the implementation block
@property (assign) long long priceType;                         //@synthesize priceType=_priceType - In the implementation block
@property (retain) NSString * localizedPrice;                   //@synthesize localizedPrice=_localizedPrice - In the implementation block
@property (nonatomic,copy) id registreBlock;                    //@synthesize registreBlock=_registreBlock - In the implementation block
@property (nonatomic,copy) id mediaContainerBlock;              //@synthesize mediaContainerBlock=_mediaContainerBlock - In the implementation block
-(void)setSocialContext:(NSString *)arg1 ;
-(NSString *)callToAction;
-(void)setCallToAction:(NSString *)arg1 ;
-(void)setPhotoUrl:(NSURL *)arg1 ;
-(void)setCoverImageUrl:(NSURL *)arg1 ;
-(void)setPriceType:(long long)arg1 ;
-(void)setLocalizedPrice:(NSString *)arg1 ;
-(void)setRegistreBlock:(id)arg1 ;
-(NSString *)socialContext;
-(void)setMediaContainerBlock:(id)arg1 ;
-(id)registreBlock;
-(id)mediaContainerBlock;
-(NSURL *)coverImageUrl;
-(void)registerViewForInteraction:(id)arg1 withViewController:(id)arg2 withClickableView:(id)arg3 ;
-(void)setMediaContainer:(id)arg1 ;
-(NSURL *)photoUrl;
-(long long)priceType;
-(NSString *)localizedPrice;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIView *)badgeView;
-(NSString *)body;
-(void)setBody:(NSString *)arg1 ;
-(void)setBadgeView:(UIView *)arg1 ;
@end
