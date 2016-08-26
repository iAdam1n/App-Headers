/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CLLocation, NSSet;

@interface MPNativeAdRequestTargeting : NSObject {

	NSString* _keywords;
	CLLocation* _location;
	NSSet* _desiredAssets;

}

@property (nonatomic,copy) NSString * keywords;                  //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,copy) CLLocation * location;                //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSSet * desiredAssets;              //@synthesize desiredAssets=_desiredAssets - In the implementation block
+(id)targeting;
-(void)setDesiredAssets:(NSSet *)arg1 ;
-(NSSet *)desiredAssets;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setKeywords:(NSString *)arg1 ;
-(NSString *)keywords;
@end
