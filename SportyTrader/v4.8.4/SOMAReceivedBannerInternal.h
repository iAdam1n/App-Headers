/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SOMAReceivedBanner.h>

@class NSData, NSMutableArray, NSURL, NSString;

@interface SOMAReceivedBannerInternal : NSObject <SOMAReceivedBanner> {

	int status;
	int errorCode;
	int _adType;
	NSString* sessionId;
	NSString* clickUrl;
	NSString* mediaFile;
	NSString* imageUrl;
	NSString* errorMessage;
	NSData* _richMediaData;
	NSMutableArray* _beacons;
	NSURL* _mediaFileURL;
	NSString* _adText;
	NSURL* _imageURL;
	NSURL* _clickURL;

}

@property (nonatomic,copy) NSString * sessionId; 
@property (assign,nonatomic) int status; 
@property (nonatomic,copy) NSString * mediaFile; 
@property (nonatomic,copy) NSString * imageUrl; 
@property (assign,nonatomic) int errorCode; 
@property (nonatomic,copy) NSString * errorMessage; 
@property (nonatomic,copy) NSString * clickUrl; 
@property (nonatomic,copy) NSData * richMediaData;                //@synthesize richMediaData=_richMediaData - In the implementation block
@property (nonatomic,copy) NSMutableArray * beacons;              //@synthesize beacons=_beacons - In the implementation block
@property (nonatomic,copy) NSURL * mediaFileURL;                  //@synthesize mediaFileURL=_mediaFileURL - In the implementation block
@property (nonatomic,copy) NSString * adText;                     //@synthesize adText=_adText - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                      //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,nonatomic) int adType;                          //@synthesize adType=_adType - In the implementation block
@property (nonatomic,copy) NSURL * clickURL;                      //@synthesize clickURL=_clickURL - In the implementation block
-(void)setAdType:(int)arg1 ;
-(NSString *)mediaFile;
-(void)setMediaFile:(NSString *)arg1 ;
-(NSURL *)clickURL;
-(void)setClickURL:(NSURL *)arg1 ;
-(void)setBeacons:(NSMutableArray *)arg1 ;
-(void)setClickUrl:(NSString *)arg1 ;
-(void)setRichMediaData:(NSData *)arg1 ;
-(NSMutableArray *)beacons;
-(void)setAdText:(NSString *)arg1 ;
-(void)setImageUrl:(NSString *)arg1 ;
-(NSData *)richMediaData;
-(NSString *)adText;
-(NSString *)imageUrl;
-(NSString *)clickUrl;
-(id)init;
-(void)dealloc;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(void)setErrorCode:(int)arg1 ;
-(int)errorCode;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(int)adType;
-(NSURL *)mediaFileURL;
-(void)setMediaFileURL:(NSURL *)arg1 ;
@end
