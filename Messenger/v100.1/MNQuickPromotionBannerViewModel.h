/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface MNQuickPromotionBannerViewModel : NSObject {

	BOOL _reserveSpaceForBannerImage;
	BOOL _isBannerTappable;
	BOOL _bannerImageRoundedCorners;
	BOOL _hidesDismissButton;
	BOOL _bannerRoundedCorners;
	NSString* _title;
	NSString* _subtitle;
	NSString* _primaryActionButtonTitle;
	NSString* _secondaryActionButtonTitle;
	unsigned long long _entryPoint;
	unsigned long long _colorScheme;
	UIImage* _bannerImage;

}

@property (nonatomic,copy,readonly) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryActionButtonTitle;                //@synthesize primaryActionButtonTitle=_primaryActionButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryActionButtonTitle;              //@synthesize secondaryActionButtonTitle=_secondaryActionButtonTitle - In the implementation block
@property (nonatomic,readonly) BOOL reserveSpaceForBannerImage;                         //@synthesize reserveSpaceForBannerImage=_reserveSpaceForBannerImage - In the implementation block
@property (nonatomic,readonly) unsigned long long entryPoint;                           //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,readonly) unsigned long long colorScheme;                          //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,readonly) UIImage * bannerImage;                                   //@synthesize bannerImage=_bannerImage - In the implementation block
@property (nonatomic,readonly) BOOL isBannerTappable;                                   //@synthesize isBannerTappable=_isBannerTappable - In the implementation block
@property (nonatomic,readonly) BOOL bannerImageRoundedCorners;                          //@synthesize bannerImageRoundedCorners=_bannerImageRoundedCorners - In the implementation block
@property (nonatomic,readonly) BOOL hidesDismissButton;                                 //@synthesize hidesDismissButton=_hidesDismissButton - In the implementation block
@property (nonatomic,readonly) BOOL bannerRoundedCorners;                               //@synthesize bannerRoundedCorners=_bannerRoundedCorners - In the implementation block
-(NSString *)primaryActionButtonTitle;
-(NSString *)secondaryActionButtonTitle;
-(id)initWithQPPromotion:(id)arg1 ;
-(BOOL)bannerImageRoundedCorners;
-(BOOL)reserveSpaceForBannerImage;
-(BOOL)isBannerTappable;
-(BOOL)hidesDismissButton;
-(BOOL)bannerRoundedCorners;
-(NSString *)title;
-(NSString *)subtitle;
-(unsigned long long)entryPoint;
-(UIImage *)bannerImage;
-(unsigned long long)colorScheme;
@end
