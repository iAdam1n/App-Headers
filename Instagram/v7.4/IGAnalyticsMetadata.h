/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableArray;

@interface IGAnalyticsMetadata : NSObject {

	NSMutableArray* _navStack;

}

@property (nonatomic,retain) NSMutableArray * navStack;              //@synthesize navStack=_navStack - In the implementation block
-(id)newNavState;
-(id)currentNavEvent;
-(void)pushAnalyticsMetadataForViewController:(id)arg1 ;
-(void)popAnalyticsMetadataForViewController:(id)arg1 ;
-(NSMutableArray *)navStack;
-(void)pushNavEvent:(id)arg1 ;
-(id)popNavEvent;
-(void)setNavStack:(NSMutableArray *)arg1 ;
-(id)init;
@end

