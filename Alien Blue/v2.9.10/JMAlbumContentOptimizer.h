/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/JMContentOptimizer.h>

@interface JMAlbumContentOptimizer : JMContentOptimizer
+(void)fetchAlbumGalleryItemsFromURL:(id)arg1 onComplete:(/*^block*/id)arg2 onError:(/*^block*/id)arg3 ;
+(BOOL)canHandleOptimizationForURL:(id)arg1 ;
+(id)extractPageTitleFromHTML:(id)arg1 ;
+(id)extractGalleryImagesWithCaptionsAndDescriptionsFromHTML:(id)arg1 ;
+(id)extractGalleryImagesWithoutCaptionsOrDescriptionsFromHTML:(id)arg1 ;
-(void)didRetrieveGalleryItems:(id)arg1 albumTitle:(id)arg2 ;
-(id)mediaDisplaySettingKey;
-(BOOL)isBetterOptimized;
-(id)contentTypeIdentifier;
-(void)fetchGalleryItems;
-(void)loadView;
-(id)initWithURL:(id)arg1 ;
@end

