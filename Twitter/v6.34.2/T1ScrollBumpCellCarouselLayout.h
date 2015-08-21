/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNDataViewCellLayout.h>

@class TFNLayoutMetrics, NSString, NSMutableDictionary;

@interface T1ScrollBumpCellCarouselLayout : TFNDataViewCellLayout {

	TFNLayoutMetrics* _layoutMetrics;
	NSString* _carouselID;
	NSMutableDictionary* _carouselCellLayouts;

}

@property (nonatomic,retain) TFNLayoutMetrics * layoutMetrics;                       //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (nonatomic,retain) NSString * carouselID;                                  //@synthesize carouselID=_carouselID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * carouselCellLayouts;              //@synthesize carouselCellLayouts=_carouselCellLayouts - In the implementation block
-(NSString *)carouselID;
-(void)setCarouselCellLayouts:(NSMutableDictionary *)arg1 ;
-(void)setCarouselID:(NSString *)arg1 ;
-(NSMutableDictionary *)carouselCellLayouts;
-(void)setLayoutMetrics:(TFNLayoutMetrics *)arg1 ;
-(TFNLayoutMetrics *)layoutMetrics;
@end

