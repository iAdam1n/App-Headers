/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FlurryAdUtil : NSObject
+(id)adViewTypeEnumToString:(int)arg1 ;
+(int)adViewTypeStringToEnum:(id)arg1 ;
+(id)getCorrectImageAsset:(id)arg1 ;
+(id)getFlurryId;
+(id)getDefaultImage:(id)arg1 ;
+(int)getScreenOrientation;
+(BOOL)canDoSKAppStore;
+(BOOL)isAdTrackingEnabled;
+(id)getUserAgent;
+(id)cachePathDirectory;
+(id)scrollViewParentForView:(id)arg1 ;
+(BOOL)isViewVisible:(id)arg1 withinScrollView:(id)arg2 asFraction:(double)arg3 ;
+(BOOL)viewIsVisibleTopOrBottom:(id)arg1 asFraction:(double)arg2 ;
+(int)screenOrientationStringToEnum:(id)arg1 ;
+(BOOL)isModalViewPresent;
+(void)initUserAgent;
+(BOOL)isRetinaDisplay;
+(id)screenOrientationArrayInstance;
+(id)adViewTypeArrayInstance;
+(id)screenOrientationEnumToString:(int)arg1 ;
+(BOOL)viewIsVisible:(id)arg1 asFraction:(double)arg2 ;
@end

