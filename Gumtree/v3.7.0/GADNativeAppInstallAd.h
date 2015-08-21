/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GADNativeAd.h>
#import <Gumtree/GADAdLoading.h>

@class NSURL, NSString, UIImage, NSDecimalNumber;

@interface GADNativeAppInstallAd : GADNativeAd <GADAdLoading> {

	NSURL* _imageURL;
	NSURL* _iconURL;
	NSURL* _attributionIconURL;
	NSString* _headline;
	NSString* _callToAction;
	UIImage* _icon;
	NSString* _body;
	NSString* _store;
	NSString* _price;
	UIImage* _image;
	NSDecimalNumber* _starRating;
	UIImage* _attributionIcon;
	NSString* _attributionText;

}

@property (nonatomic,copy,readonly) NSString * headline; 
@property (nonatomic,copy,readonly) NSString * callToAction; 
@property (nonatomic,readonly) UIImage * icon; 
@property (nonatomic,readonly) UIImage * attributionIcon; 
@property (nonatomic,copy,readonly) NSString * attributionText;                //@synthesize attributionText=_attributionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                           //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * store;                          //@synthesize store=_store - In the implementation block
@property (nonatomic,copy,readonly) NSString * price;                          //@synthesize price=_price - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * starRating;              //@synthesize starRating=_starRating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredDelegateProtocol;
+(id)requestParametersForAdLoader:(id)arg1 ;
-(id)requiredAssets;
-(NSString *)callToAction;
-(UIImage *)attributionIcon;
-(void)loadAssets;
-(void)didReceiveAdForAdLoader:(id)arg1 ;
-(id)clickActionTemplateID;
-(BOOL)hasAttributionInformation;
-(NSString *)attributionText;
-(NSDecimalNumber *)starRating;
-(NSString *)headline;
-(NSString *)store;
-(NSString *)price;
-(UIImage *)icon;
-(id)initWithDictionary:(id)arg1 ;
-(UIImage *)image;
-(NSString *)body;
@end

