/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAMessageHelper.h>

@interface WALocationMessageHelper : WAMessageHelper
+(void)copyContentToPasteboardOfType:(unsigned long long)arg1 inMessage:(id)arg2 ;
+(id)stringRepresentationForMessage:(id)arg1 ;
+(id)stringRepresentationForChatForMessage:(id)arg1 ;
+(id)formattedStringWithVoiceOverSummaryForMessage:(id)arg1 ;
+(id)attributedTextForMessage:(id)arg1 ;
+(void)loadMapThumbnailForLocation:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 retryOnFail:(BOOL)arg4 ;
+(void)loadGoogleMapsThumbnailForLocation:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)needsImageLoader;
+(BOOL)canCopyContentToPasteboardOfType:(unsigned long long)arg1 inMessage:(id)arg2 ;
+(void)initialize;
-(id)smallImageForMessageImageLoaderWithInfo:(id)arg1 ;
-(id)newImageLoader;
-(id)largeImageForMessageImageLoaderWithInfo:(id)arg1 ;
-(BOOL)shouldCacheLargeTransformedImage:(id)arg1 fromOriginalImage:(id)arg2 info:(id)arg3 ;
@end
