/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor;

@interface BopisOrderBannerInfo : NSObject {

	BOOL _permitTopActionButton;
	NSString* _title;
	NSString* _iPadTitle;
	NSString* _detailText;
	NSString* _excuse;
	UIColor* _bannerColor;

}

@property (assign,nonatomic) BOOL permitTopActionButton;              //@synthesize permitTopActionButton=_permitTopActionButton - In the implementation block
@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * iPadTitle;                    //@synthesize iPadTitle=_iPadTitle - In the implementation block
@property (nonatomic,retain) NSString * detailText;                   //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) NSString * excuse;                       //@synthesize excuse=_excuse - In the implementation block
@property (nonatomic,retain) UIColor * bannerColor;                   //@synthesize bannerColor=_bannerColor - In the implementation block
-(NSString *)excuse;
-(NSString *)iPadTitle;
-(BOOL)permitTopActionButton;
-(UIColor *)bannerColor;
-(void)setPermitTopActionButton:(BOOL)arg1 ;
-(void)setIPadTitle:(NSString *)arg1 ;
-(void)setExcuse:(NSString *)arg1 ;
-(void)setBannerColor:(UIColor *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)debugDescription;
-(NSString *)title;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
@end
