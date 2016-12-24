/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <SportyTrader/IFlurryTumblrShareParameters.h>

@class NSString;

@interface FlurryImageShareParameters : NSObject <NSCopying, IFlurryTumblrShareParameters> {

	NSString* _webLink;
	NSString* _iOSDeepLink;
	NSString* _androidDeepLink;
	NSString* _imageURL;
	NSString* _imageCaption;

}

@property (nonatomic,retain) NSString * imageURL;                     //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSString * imageCaption;                 //@synthesize imageCaption=_imageCaption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * iOSDeepLink;                  //@synthesize iOSDeepLink=_iOSDeepLink - In the implementation block
@property (nonatomic,retain) NSString * androidDeepLink;              //@synthesize androidDeepLink=_androidDeepLink - In the implementation block
@property (nonatomic,retain) NSString * webLink;                      //@synthesize webLink=_webLink - In the implementation block
-(void)setIOSDeepLink:(NSString *)arg1 ;
-(void)setAndroidDeepLink:(NSString *)arg1 ;
-(void)setWebLink:(NSString *)arg1 ;
-(NSString *)iOSDeepLink;
-(NSString *)androidDeepLink;
-(NSString *)webLink;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)imageCaption;
-(void)setImageCaption:(NSString *)arg1 ;
-(void)setImageURL:(NSString *)arg1 ;
-(NSString *)imageURL;
@end
