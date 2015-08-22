/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1MultiPhotoDownloaderDelegate.h>
#import <Twitter/TFNTwitterCardContextModel.h>

@class UIImage, TFNTwitterCardContext, TFNTwitterCommerceOffer, NSString, T1MultiPhotoDownloader, TFNTwitterCardImageSpec;

@interface T1NativeOffersCardViewModel : NSObject <T1MultiPhotoDownloaderDelegate, TFNTwitterCardContextModel> {

	BOOL _isFullBleed;
	UIImage* _image;
	TFNTwitterCardContext* _cardContext;
	long long _displayMode;
	TFNTwitterCommerceOffer* _offer;
	NSString* _callToActionKey;
	T1MultiPhotoDownloader* _downloader;
	TFNTwitterCardImageSpec* _imageData;

}

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * byline; 
@property (nonatomic,readonly) NSString * callToAction; 
@property (nonatomic,readonly) NSString * cardOfferBadgeLabel; 
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) BOOL isFullBleed;                               //@synthesize isFullBleed=_isFullBleed - In the implementation block
@property (nonatomic,retain) TFNTwitterCardContext * cardContext;              //@synthesize cardContext=_cardContext - In the implementation block
@property (assign,nonatomic) long long displayMode;                            //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) TFNTwitterCommerceOffer * offer;                  //@synthesize offer=_offer - In the implementation block
@property (nonatomic,retain) NSString * callToActionKey;                       //@synthesize callToActionKey=_callToActionKey - In the implementation block
@property (nonatomic,retain) T1MultiPhotoDownloader * downloader;              //@synthesize downloader=_downloader - In the implementation block
@property (nonatomic,retain) TFNTwitterCardImageSpec * imageData;              //@synthesize imageData=_imageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)multiPhotoDownloader:(id)arg1 didDownloadImage:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(NSString *)callToAction;
-(id)initWithCardContext:(id)arg1 ;
-(TFNTwitterCardContext *)cardContext;
-(void)startDownloadingImage;
-(void)setCardContext:(TFNTwitterCardContext *)arg1 ;
-(NSString *)byline;
-(id)_createCardImageSpec;
-(BOOL)isFullBleed;
-(NSString *)callToActionKey;
-(void)setCallToActionKey:(NSString *)arg1 ;
-(id)_createOffer;
-(NSString *)cardOfferBadgeLabel;
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(NSString *)title;
-(void)reset;
-(UIImage *)image;
-(CGSize)imageSize;
-(long long)displayMode;
-(void)setDisplayMode:(long long)arg1 ;
-(T1MultiPhotoDownloader *)downloader;
-(void)setDownloader:(T1MultiPhotoDownloader *)arg1 ;
-(void)setOffer:(TFNTwitterCommerceOffer *)arg1 ;
-(TFNTwitterCardImageSpec *)imageData;
-(void)setImageData:(TFNTwitterCardImageSpec *)arg1 ;
-(TFNTwitterCommerceOffer *)offer;
@end
