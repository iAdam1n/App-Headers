/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface UnityAdsAppSheetManager : NSObject {

	NSString* _currentItunesId;
	NSMutableDictionary* _appSheetCache;

}

@property (nonatomic,retain) NSMutableDictionary * appSheetCache;              //@synthesize appSheetCache=_appSheetCache - In the implementation block
+(BOOL)canOpenStoreProductViewController;
+(id)sharedInstance;
-(void)preloadAppSheetWithId:(id)arg1 ;
-(id)getAppSheetController:(id)arg1 ;
-(void)openAppSheetWithId:(id)arg1 toViewController:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)appSheetCache;
-(void)setAppSheetCache:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end
