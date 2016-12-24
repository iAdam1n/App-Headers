/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBInstantShoppingExperimentContext : FBExperimentContext {

	NSString* _saveTooltipText;
	long long _prefetchCarouselImagesCount;
	BOOL _prefetchCarousel;

}

@property (nonatomic,copy) NSString * saveTooltipText;                           //@synthesize saveTooltipText=_saveTooltipText - In the implementation block
@property (assign,nonatomic) long long prefetchCarouselImagesCount;              //@synthesize prefetchCarouselImagesCount=_prefetchCarouselImagesCount - In the implementation block
@property (assign,nonatomic) BOOL prefetchCarousel;                              //@synthesize prefetchCarousel=_prefetchCarousel - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)prefetchCarousel;
-(long long)prefetchCarouselImagesCount;
-(NSString *)saveTooltipText;
-(void)setSaveTooltipText:(NSString *)arg1 ;
-(void)setPrefetchCarouselImagesCount:(long long)arg1 ;
-(void)setPrefetchCarousel:(BOOL)arg1 ;
@end
